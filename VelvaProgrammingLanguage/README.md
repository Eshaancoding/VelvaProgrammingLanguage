# Velva Programming Language

The Velva Programming Language is a low-level programming language designed for extensibility, friendly syntax, and equipped with plenty of useful libraries.

## Goals

* Speed comparable to C++.
* Friendly Syntax
* Automatic Differentiation Library
* Communications Library (UCP/TCP protocol, etc.)
* Strongly-typed
* Friendly and easy-to-understand error messages

## Implemented so far:

* Only `int` (integer) variables Declaration:
    * `int a = 3`
* `print` statements with the int variable
    * Expressions (ex: operations `+`, `-`, etc.) are not supported! Yet..
* `vild main.vtk` will just print out the IR code, won't actually create an object file (that's like in chapter 8 of Kaleidoscope, which we will do later)

* Example Code: 

```
int a = 3
print(a)
```

## How to run?

* You could go to the Releases tab and select your operating system. 
    * Our website is [here](https://www.google.com/search?q=nonexistent+programming+language+website).

## How to build manually?

1. make a `build` folder in the `VelvaProgrammingLang` directory (`mkdir build`)
2. Go into the `build` folder by `cd build` 
3. Run `cmake -G [Generator of Your Choice] ../`
    * The generator can be Unix Makefiles, Ninja, Visual Studio, or any other (you could check your available options by typing `cmake --help`)
    * Recommended is Ninja, since it has default parrallel-worker support (faster).
4. Then build the program using `make`, `ninja`, etc. (depends on the generator of your choice) 
5. Use `vild main.vtk` to run the program

## Why are we doing this?

* We don't know
* Why beshaan is doing this: because he's bored of machine learning and frontend development from time to time
    * He also likes C++ a lot and always wanted to make a big project out of it.
    * He also wants to learn from Daniel D'Silva about low-level programming stuff.

## How long will this take? 

* Like forever.

## Target Syntax:

```
//This is a comment
/* This is a multi-
line
comment */

print("Hello World") //Prints Hello World

//The declaration of write is as follows:
func print(string s, /* omitted for now */)

//Writing our own function:
pure sum(int a, int b) -> int {
	return a+b
}

//The above function adds two integers (I know it's so complicated)
//You will notice that `write` is declared with <<func>> while our own function is declared with <<pure>>
//The difference is that pure functions cannot:
// * Call any non-pure function
// * Store state
//This enables the compiler to optimize better if it knows there are no side effects — for instance, it can compute functions at compile time if it can
\
var variable = 3
print(“hello, your is ${variable}”)
int variable = 3 //Compiler type specification
const ls = [2, 3]
ls = [1, 2] //ERROR: vals can only be mutated by the object

variable.append(2) //ERROR: Nothing can mutate the class

// fixed arr length
const int[3] arr = [3,2,3]; 


// Demonstration of constructor and stuff.
class ClassFive {
	private int x;
	private char y;

	construct (int x, char y) : x(x), y(y); // <-- it now sets each of the private variables to the parameters.
}

// Class ClassOne
class ClassOne {
(public get, private get set, protected get set) {
	int x {
		get { return 3 }
		set { print("Set to ${$0}") }
	}
	int y = 3 {
		didset { print("did set y to ${y}") }
	}
		
}

// Static variables that could been seen across all objects
static (public get, private get set) {
	int global variable
}

public {
int i = 3
}
// Constructor
	construct () {
		print("papa jaime HI THANKS FOR INVITING ME TO YOUR PROJECT DANIEL")
	}

// deconstruct 

destruct () {
	//Members are destroyed after destructor is run
}

// a function that doesn’t return anything
func addToResult (int a, int b)  {
	self.result = a + b;
}

// Only can read the result
	pure justReadAdd (int a, double b) {
self.result = 3 // ERROR!!!!		
		return a + b + self.result; // No error! It can read.
}
}

class ClassTwo -> ClassOne {
	func 
}

extend ClassOne {
	pure inc(int a) {
		return a + 1
	}
}

// Adds a new method to the class


// In another file.
import “/HelloWorld.stk”


// Example
class ClassOne {
	private {
		int gears = 3;
}
func getGears () -> int {
	return gears;
}
}

class ClassTwo {
	func printGearClassOne (ClassOne obj) {
		print(obj.getGears());
	}
}

// If statements
int x = 3
if (x == 3) { x = 5 }
if (y == 2) {y = 6; x = 2} 

while (x >= 3) { x -= 5 }

const array = [1,2,3,4,5];
for (int i : array) {
	// do stuff
}

for (int i = 0; i < 3; i++) {
	// No one cares about you.
}


// Data structures, use only tensor

// array

int myTensor = tensor<type>(dimension); // arguments with dimensions of the 
// one dimension makes array, other dimension can be fixed

// 2d array
int myMat = tensor<type type>(dimension, dimension); // matrix

// 1d array
tensor array = [2.3,4.2]

// 2d array
tensor array = [[2.3,4.2],[2.3,4.2]]

// hashmap
map<int, int> myMap = [{2.3:62}, {63:2.3}];
var myMap = [{2.3:62}, {3.2:662}]
map<tensor, int>
```