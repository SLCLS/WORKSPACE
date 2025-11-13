// SPDX-License-Identifier: MIT
pragma solidity ^0.8.20;

/// @title Solidity Reference Examples
/// @author SLCLS
/// @notice Collection of Solidity examples: types, functions, modifiers, events, inheritance, interfaces, libraries, low-level calls, and common patterns.

// Global examples: types & simple utilities

contract TypesAndVars {
    // State variables
    uint256 public u = 123; // unsigned integer (default uint256)
    int256 public i = -42;  // signed integer
    bool public flag = true;
    address public owner;
    string public greeting = "Hello, Solidity!";
    bytes32 public fixedBytes = keccak256("abc");

    // Fixed-size array
    uint8[3] public fixedArray = [1,2,3];

    // Dynamic array
    uint256[] public dynamicArray;

    // Struct
    struct Person { string name; uint8 age; }
    Person public alice = Person({name: "Alice", age: 30});

    // Mapping
    mapping(address => uint256) public balanceOf;

    // Enum
    enum State { Created, Locked, Released }
    State public state;

    // Constructor
    constructor() {
        owner = msg.sender;
    }

    // Push to dynamic array
    function pushValue(uint256 _value) public {
        dynamicArray.push(_value);
    }

    // Memory vs storage vs calldata
    function readPersonMemory() public view returns (string memory) {
        Person memory p = alice; // copied to memory
        return p.name;
    }

    // Example: calldata for external view
    function echo(bytes calldata input) external pure returns (bytes calldata) {
        return input;
    }
}

// Functions: visibility, mutability, payable
contract FunctionsExamples {
    uint public x;

    // public / external / internal / private
    function setPublic(uint _x) public { x = _x; }

    function getPublic() public view returns (uint) { return x; }

    function _internalDouble() internal view returns (uint) { return x * 2; }

    function callInternalDouble() public view returns (uint) { return _internalDouble(); }

    // pure / view
    function addPure(uint a, uint b) public pure returns (uint) { return a + b; }

    // payable
    receive() external payable {}

    fallback() external payable {}

    function deposit() external payable {}

    function withdraw(uint amount, address payable to) public {
        require(amount <= address(this).balance, "Insufficient balance");
        to.transfer(amount); // .transfer forwards 2300 gas (may revert with gas changes)
    }
}

// Events, modifiers, errors
contract EventsModifiersErrors {
    address public owner;
    error NotOwner(address caller);

    event ValueSet(address indexed setter, uint256 value);

    modifier onlyOwner() {
        if (msg.sender != owner) revert NotOwner(msg.sender);
        _;
    }

    constructor() {
        owner = msg.sender;
    }

    uint public value;

    function setValue(uint _v) public onlyOwner {
        value = _v;
        emit ValueSet(msg.sender, _v);
    }
}

// Inheritance, abstract contracts, interfaces
abstract contract AbstractStorage {
    function set(uint x) public virtual;
    function get() public view virtual returns (uint);
}

contract SimpleStorage is AbstractStorage {
    uint private stored;

    function set(uint x) public override { stored = x; }
    function get() public view override returns (uint) { return stored; }
}

// Interface example
interface IERC20Minimal {
    function totalSupply() external view returns (uint256);
    function balanceOf(address account) external view returns (uint256);
    function transfer(address to, uint256 amount) external returns (bool);
    event Transfer(address indexed from, address indexed to, uint256 value);
}

// Multiple inheritance example
contract TokenUser is IERC20Minimal {
    mapping(address => uint) balances;
    uint total;

    function totalSupply() external view override returns (uint256) { return total; }
    function balanceOf(address account) external view override returns (uint256) { return balances[account]; }
    function transfer(address to, uint256 amount) external override returns (bool) {
        require(balances[msg.sender] >= amount, "Insufficient");
        balances[msg.sender] -= amount;
        balances[to] += amount;
        emit Transfer(msg.sender, to, amount);
        return true;
    }
}

// Libraries & using-for
library MathLib {
    function max(uint a, uint b) internal pure returns (uint) {
        return a >= b ? a : b;
    }
}

contract LibraryUser {
    using MathLib for uint;

    function maxOf(uint a, uint b) public pure returns (uint) {
        return MathLib.max(a,b);
    }
}

// Low-level calls, delegatecall, staticcall
contract LowLevel {
    // send/transfer/call
    function sendEther(address payable to) public payable {
        // safe recommended: call
        (bool ok, ) = to.call{value: msg.value}("");
        require(ok, "transfer failed");
    }

    // call to external contract, example: calling function by signature
    function callSet(address target, uint x) public returns (bytes memory) {
        (bool ok, bytes memory data) = target.call(abi.encodeWithSignature("set(uint256)", x));
        require(ok, "call failed");
        return data;
    }

    // delegatecall: executes in context of this contract's storage
    function delegateTo(address callee, bytes memory payload) public returns (bytes memory) {
        (bool ok, bytes memory ret) = callee.delegatecall(payload);
        require(ok, "delegatecall failed");
        return ret;
    }

    // staticcall: for view-only external call
    function staticQuery(address target, bytes memory payload) public view returns (bytes memory) {
        (bool ok, bytes memory ret) = target.staticcall(payload);
        require(ok, "staticcall failed");
        return ret;
    }
}

// Example: Basic ERC20 token (minimal)
contract SimpleERC20 {
    string public name = "SimpleToken";
    string public symbol = "STK";
    uint8 public decimals = 18;
    uint256 public totalSupply;
    mapping(address => uint256) public balanceOf;
    mapping(address => mapping(address => uint256)) public allowance;

    event Transfer(address indexed from, address indexed to, uint256 value);
    event Approval(address indexed owner, address indexed spender, uint256 value);

    constructor(uint256 _initial) {
        totalSupply = _initial * (10 ** decimals);
        balanceOf[msg.sender] = totalSupply;
    }

    function transfer(address _to, uint256 _value) public returns (bool) {
        require(balanceOf[msg.sender] >= _value, "Insufficient");
        balanceOf[msg.sender] -= _value;
        balanceOf[_to] += _value;
        emit Transfer(msg.sender, _to, _value);
        return true;
    }

    function approve(address _spender, uint256 _value) public returns (bool) {
        allowance[msg.sender][_spender] = _value;
        emit Approval(msg.sender, _spender, _value);
        return true;
    }

    function transferFrom(address _from, address _to, uint256 _value) public returns (bool) {
        require(balanceOf[_from] >= _value, "Insufficient");
        require(allowance[_from][msg.sender] >= _value, "Not allowed");
        allowance[_from][msg.sender] -= _value;
        balanceOf[_from] -= _value;
        balanceOf[_to] += _value;
        emit Transfer(_from, _to, _value);
        return true;
    }
}

// Storage patterns: storage vs memory
contract StorageExamples {
    struct Item { uint id; string name; }
    Item[] public items;

    function addItem(string memory name) public {
        items.push(Item({id: items.length, name: name}));
    }

    function modifyItem(uint index, string memory newName) public {
        // storage pointer: modifies array element in-place
        Item storage it = items[index];
        it.name = newName;
    }
}

// Advanced: try/catch, custom errors, revert, assert
contract ErrorHandling {
    error Underflow(uint256 a, uint256 b);

    function divide(uint a, uint b) public pure returns (uint) {
        require(b != 0, "division by zero");
        return a / b;
    }

    function mightRevert(address target) public returns (bool) {
        try SimpleStorage(payable(target)).get() returns (uint val) {
            return val > 0;
        } catch {
            return false;
        }
    }
}

// Security notes: reentrancy guard
contract ReentrancyGuard {
    uint256 private _status;
    constructor() { _status = 1; }
    modifier nonReentrant() {
        require(_status == 1, "Reentrant");
        _status = 2;
        _;
        _status = 1;
    }
}

contract SafeVault is ReentrancyGuard {
    mapping(address => uint) public balances;

    function deposit() external payable {
        balances[msg.sender] += msg.value;
    }

    function withdraw(uint amount) external nonReentrant {
        require(balances[msg.sender] >= amount, "Insufficient");
        balances[msg.sender] -= amount;
        (bool ok, ) = msg.sender.call{value: amount}("");
        require(ok, "Transfer failed");
    }
}

// Misc: Self-destruct, immutable, constant
contract MiscExamples {
    address public immutable creator;
    uint256 public constant MAX = 1000;

    constructor() {
        creator = msg.sender;
    }

    function kill() external {
        require(msg.sender == creator, "only creator");
        selfdestruct(payable(creator));
    }
}

/* End of reference.sol */