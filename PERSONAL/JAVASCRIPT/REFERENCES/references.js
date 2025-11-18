// javascript_reference_examples.js
// A comprehensive reference file containing common JavaScript syntax,
// features, patterns, data structures, functions, OOP, async, modules, DOM,
// events, promises, error handling, and utilities.

// VARIABLES & DATA TYPES
let a = 10;              // mutable
const b = 20;           // immutable
var c = 30;             // function-scoped (legacy)

let str = "Hello";
let num = 123;
let bool = true;
let arr = [1, 2, 3];
let obj = { name: "Alice", age: 20 };
let n = null;
let u = undefined;
let big = 123n;         // BigInt
let sym = Symbol("id"); // Symbol

// OPERATORS
let sum = 1 + 2;
let diff = 5 - 3;
let product = 3 * 4;
let quotient = 10 / 2;
let exponent = 2 ** 3;
let mod = 10 % 3;

let logical = (true && false) || !false;
let comparison = 5 > 3;

// TEMPLATE LITERALS
let name = "Ken";
let greeting = `Hello, ${name}!`;

// CONDITIONALS & SWITCH
if (a > 5) {
  console.log("a is greater than 5");
} else if (a === 5) {
  console.log("a is 5");
} else {
  console.log("a is small");
}

let color = "red";
switch (color) {
  case "red":
    console.log("Stop!");
    break;
  case "green":
    console.log("Go!");
    break;
  default:
    console.log("Caution");
}

// LOOPS
for (let i = 0; i < 5; i++) console.log(i);

for (const item of arr) console.log(item);

for (const key in obj) console.log(key, obj[key]);

let i = 0;
while (i < 3) {
  i++;
}

do {
  i++;
} while (i < 5);

// FUNCTIONS
function add(x, y) {
  return x + y;
}

const multiply = function (x, y) {
  return x * y;
};

const subtract = (x, y) => x - y;

// DEFAULT PARAMETERS & REST PARAMETERS
function greet(msg = "Hello") {
  console.log(msg);
}

function sumAll(...nums) {
  return nums.reduce((a, b) => a + b, 0);
}

// DESTRUCTURING & SPREAD
const person = { pName: "Alice", pAge: 20 };
const { pName, pAge } = person;

const newArr = [...arr, 4, 5];
const newObj = { ...person, city: "Manila" };

// CLASSES, INHERITANCE, CONSTRUCTORS
class Animal {
  constructor(name) {
    this.name = name;
  }
  speak() {
    console.log(`${this.name} makes a sound.`);
  }
}

class Dog extends Animal {
  speak() {
    console.log(`${this.name} barks.`);
  }
}

const dog = new Dog("Buddy");
dog.speak();

// MODULES (ESM)
//-------------------------------------------------------------
// export const PI = 3.14;
// export function area(r) { return PI * r * r; }
// import { PI, area } from './math.js';

// PROMISES
const asyncTask = new Promise((resolve, reject) => {
  setTimeout(() => resolve("Done!"), 1000);
});

asyncTask.then(console.log).catch(console.error);

// ASYNC / AWAIT
async function loadData() {
  try {
    let result = await asyncTask;
    console.log(result);
  } catch (err) {
    console.error(err);
  }
}

// FETCH API (BROWSER)

// async function fetchUsers() {
//   const res = await fetch('https://jsonplaceholder.typicode.com/users');
//   const data = await res.json();
//   console.log(data);
// }

// ERROR HANDLING
try {
  throw new Error("Something went wrong");
} catch (e) {
  console.error(e.message);
} finally {
  console.log("Always runs");
}

// MAP, FILTER, REDUCE
let evens = arr.filter(x => x % 2 === 0);
let doubled = arr.map(x => x * 2);
let total = arr.reduce((acc, x) => acc + x, 0);

// SETS & MAPS
const set = new Set([1, 2, 2, 3]);
set.add(4);

const map = new Map();
map.set("key", "value");

// DOM MANIPULATION
//-------------------------------------------------------------
// const div = document.getElementById('myDiv');
// div.innerText = "Hello!";
// const btn = document.createElement('button');
// btn.textContent = "Click";
// document.body.appendChild(btn);

// EVENT HANDLING
//-------------------------------------------------------------
// btn.addEventListener('click', () => alert('Clicked!'));

// TIMERS
setTimeout(() => console.log("1 second passed"), 1000);
let interval = setInterval(() => console.log("tick"), 1000);
clearInterval(interval);

// LOCAL STORAGE (BROWSER)
//-------------------------------------------------------------
// localStorage.setItem('token', 'abc123');
// let token = localStorage.getItem('token');
// localStorage.removeItem('token');

// JSON
const json = JSON.stringify({ hello: "world" });
const parsed = JSON.parse(json);

// NODE.JS BASICS (COMMONJS)
//-------------------------------------------------------------
// const fs = require('fs');
// fs.writeFileSync('file.txt', 'Hello');
// const data = fs.readFileSync('file.txt', 'utf8');

//-------------------------------------------------------------
// EXPORT DEFAULT EXAMPLE
//-------------------------------------------------------------
// export default function hello() { console.log("Hello default"); }

//-------------------------------------------------------------
// END OF reference.js
//-------------------------------------------------------------