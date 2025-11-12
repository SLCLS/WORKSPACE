#ifdef _MSC_VER
#pragma warning(push, 0)
#else
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wall"
#pragma GCC diagnostic ignored "-Wextra"
#pragma GCC diagnostic ignored "-Wpedantic"
#endif

// Global Declaration, please disregard.
int x = 1, y = 2, ans = 3, value_if_true = 1, value_if_false = 0;
string fullName, firstName, lastName;

// *** START HERE, DISREGARD THE ERROR SUPPRESSION ABOVE.

#include <iostream> // for input and output
#include <cstdlib>  // for general purpose functions (e.g. rand())
#include <ctime>    // for time functions (e.g. time())
#include <cmath>    // for math functions (e.g. sqrt())
#include <iomanip>  // for input/output manipulators (e.g. setprecision(), setw())
#include <string>   // for string functions
#include <limits>   // for numeric limits
using namespace std;

#define PI 3.14159   // #define <identifer> <value>; Constant value cannot be changed.
const double E = 2.71828; // const <type> <identifier> = <value>; // Constant value cannot be changed.

// -- VARIABLE TYPES --:
int int_var;         // stores integers (whole numbers), without decimals, such as 123 or -123
double double_var;   // stores floating point numbers, with decimals, such as 19.99 or -19.99
char char_var;       // stores single characters, such as 'a' or 'B'. Char values are surrounded by single quotes
string string_var;   // stores text, such as "Hello World". String values are surrounded by double quotes
bool bool_var;       // stores values with two states: true or false

// NOTE: Safer to use double over float due to precision issues.
auto auto_var = 42; // automatically deduces the type of the variable from its initializer

// -- ARITHMETIC OPERATORS --
int ans = x + y;
int ans = x - y;
int ans = x * y;
int ans = x / y;
int ans = x % y; // modulus (remainder) operator; works only with integers (e.g. 5 % 2 = 1)
int ans = ++x;   // increment operator; increases the value of x by 1 (interchangable with x++)
int ans = --y;   // decrement operator; decreases the value of y by 1 (interchangable with y--)

// -- ASSIGNMENT OPERATORS --
x = y;  // Basic Assignment Operator
x += y; // x = x + y
x -= y; // x = x - y
x *= y; // x = x * y
x /= y; // x = x / y
x %= y; // x = x % y
x &= y; // x = x & y (bitwise AND)
x |= y; // x = x | y (bitwise OR)
x ^= y; // x = x ^ y (bitwise XOR)
x <<= y; // x = x << y (bitwise left shift)
x >>= y; // x = x >> y (bitwise right shift)

// -- COMPARISON OPERATORS --
ans = (x == y); // equal to
ans = (x != y); // not equal to
ans = (x > y);  // greater than
ans = (x < y);  // less than
ans = (x >= y); // greater than or equal to
ans = (x <= y); // less than or equal to

// -- LOGICAL OPERATORS --
ans = (x && y); // logical AND
ans = (x || y); // logical OR
ans = !x;       // logical NOT

// -- BITWISE OPERATORS --
ans = x & y;  // bitwise AND
ans = x | y;  // bitwise OR
ans = x ^ y;  // bitwise XOR
ans = ~x;     // bitwise NOT
ans = x << y; // left shift
ans = x >> y; // right shift

// -- OTHER OPERATORS --
ans = sizeof(x); // returns the size of a variable in bytes
ans = (x > y) ? value_if_true : value_if_false; // ternary operator

// NOTE: Order of operations are as follow [ "()", "++ --", "* / %", "+ -", "<< >>", "< <= > >=", "== !=", "&", "^", "|", "&&", "||", "? :", "=" ]

// -- STRING OPERATIONS --
string fullName = firstName.append(lastName); // appends lastName to firstName


// *** END HERE, DISREGARD THE ERROR SUPPRESSION BELOW.

#ifdef _MSC_VER
#pragma warning(pop)
#else
#pragma GCC diagnostic pop
#endif