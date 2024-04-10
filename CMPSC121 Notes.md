# MODULE 2 Object and variables

- The COUT object

cout displays output to the cimputer screen.
Use stream insertion operator <<

example: cout << "Programming is fun!";

Use endl; to create new line of output.

- Variables

A storage location in memory. It has a name and a type of data it can hold and must be defined before it can be used:

Name should represent variable purpose.

Valid and invalid identifiers for variables:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/a941b78b-ae0e-4ea6-a0db-162b64ca73b0)

- Numeric Types in C++

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/01e37c48-1d5a-45b0-a63a-204ffa5c69f1)

- Arithmetic operators

`*` multiplication

`/` division

`+` addition

`-` subtraction

- Increment and decrement a variable

counter++; //add 1 to counter

counter--; //remove 1 from counter

- interger division and remainder

The `%` operator computes remainder of integer division.

This is the modulus operator.

If to integers are divided the remainder is discarded or truncated.

- Order of arthmetic operations

left to right multiplication and division, then addition and subtraction

Add parenthesis to change order

- Strings

Must include the string header `#include <string>`

Using the cin with >> will cause problems with strings because it stops reading input once whitespace is encountered.  Use the C++ function `getline()`

to find length of a string:

`string state = "Texas";`

`int size = state.length()`

# Module 3 input and output

- Formatting output

Use header `#include <iomanip>`

As first cout statement:

`cout << fixed << setprecision(2);`

`double cost;`

`cost = 1989.87 / 96.22; // Evaluates to 20.68042`

`cout << “|” << setw(10) << cost << “|” ;`

Displays:

`|      20.68| - 10 print positions, right justified`

- Floating Point Data Types

These are: 

double

float 

long double

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/3effeeb1-f536-4e0a-b3f5-04418b7c6f38)

Can be represented in fixed point `(0.000625)` or E notation `(3.14159E1)`

If dividing an integer and you want to keep the remainder turn one of the operans into a floating point `num = 5/9.0` or `n1 = n2/static_cast<double>(n3);`

