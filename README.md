# Velva Programming Language

The Velva Programming Language is a low-level programming language designed for extensibility, friendly syntax, and equipped with plenty of useful libraries.

## Todo:

* Enable arguments be classes
	* The convert to LLVM Type should already be implemented
	* in CompilationContext::getDefaultValue make sure you have default classes already
		* shoudl give error if not default function

* tree sitter classes are .... weird bruh
	* remove reuse classes "like ClassVarDecl"
	* also precendents are weird; maybe singular them out.

* Check if scoping really works
	* what if you declare two variables in a different scope?
	* Check whether overloaded functions (both in classes and outside classes) work
	* what if an argument to the function and then the same name is redeclared :(

* pointer type (support for classes too!), char (int8)

* add string stdlib

* better error management (search for throw invalid argument and then go from there)

* linter (treesitter)
* intellisense (microsoft language server protocol (LSP), not sure how to implement that)

* multiple files 
	* Ig you can call `ld` and `clang` temporaily but one day you have to make it into a c interface one day you know

* better error messages
* enums, structs

=========================================
* Create a full or auto diff / neural network then :0
=========================================
* Class Inheritance (Polymorphism)

## Tests

Once you successfully generate build files using the `cmake` command and executable `veld` (more instructions on "How to build manually?"), you could look at all the tests that Velva is currently passing.

The tests are at the `tests` folder of this repo. Almost all of .vld are then checked with the `ctest` command that is set up in the `CMakeLists.txt`

## Goals

* Speed comparable to C++.
* Friendly Syntax
* Automatic Differentiation Library
* Communications Library (UCP/TCP protocol, etc.)
* Strongly-typed
* Friendly and easy-to-understand error messages

## How to run?

* You could go to the Releases tab and select your operating system. 
    * Our website is [here](https://www.google.com/search?q=nonexistent+programming+language+website).

## How to build manually?

1. Create the tree sitter cli via going to the `src/TreeSitter` directory and run `npm install`  (<--- TODO: Maybe add this in CMake later)
2. Add `src/TreeSitter/node_modules/tree-sitter-cli/` to path, this will generate the CLI needed for generating the tree sitter source code
3. In the `src/TreeSitter` directory, run `tree-sitter generate`
4. make a `build` folder in the `VelvaProgrammingLang` directory (`mkdir build`) and go into it (`cd build`)
5. Run `cmake -G [Generator of Your Choice] ../`
    * The generator can be Unix Makefiles, Ninja, Visual Studio, or any other (you could check your available options by typing `cmake --help`)
    * Recommended is Ninja, since it has default parrallel-worker support (faster).
6. Then build the program using `make`, `ninja`, etc. (depends on the generator of your choice) 
7. Use `veld main.vtk` to run the program

## Why are we doing this?

* We don't know
* Why Beshaan is doing this: because he's bored of machine learning and frontend development from time to time
    * He also likes C++ a lot and always wanted to make a big project out of it.
    * He also wants to learn from Daniel D'Silva about low-level programming stuff.

## How long will this take? 

* Like forever.
* No seriously. Like forever

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

// Arbitrary-sized integers
int<16> shortNum = -65536;
int<8388608> maxSizedNum = 1;
for (int i = 0; i < 2500000; i++) {
	maxSizedNum *= 10; // Won't overflow!
}
```