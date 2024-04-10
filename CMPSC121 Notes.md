# Module 2 Object and variables

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

- The bool Data Type

Represents values that are true or false.  Bool variables are stored as integers.

`False = 0`

`True = 1`

- Variable Assignments and Initialization

Assignment statment uses `=`

Variable receiving the value must appear on the left side of the `=` operator

A variable cannot be used before it is defined.

Common header files:

`#include <iostream> //ALWAYS!!!`

`#include <iomanip>  //To allow formatting of numbers and strings`

`#include <cmath>  //To allow use of mathematical functions, eg sqrt or cosine`

`#include <cstdlib>  //We use this with random numbers`

`#include <string>  //We need this if we use string variables`

- Comments

`//` for single line comments

`/**/` for multi line comments

- The cin object

cin stands for console input.  This requires the iostream header file.  Used to read input from keyboard.  INput is stored in one or more variables.

`cin >> height >> width;` recieves input from multiple variables, must be seperated by spaces during keyboard input.

cin can be used to assign a string to a string variable as long as the string doesn't contain spaces.

In this case use the `getline(cin, "string variable name here")` function to read until it encounters a hard return in the stream.  It reads and discards the hard return.

- Type Casting

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/bb8a61b4-4c26-4005-878e-6c50240a6910)

- Constants

A constant is like a variable because it holds a value, however, that value cannot change.  These are usually declared before main.  Use all caps for constants.

`const double TAXRATE = 0.06;`

- Extraction Operator (>>)

Usage:

`cin >> age >> weight;`

When the extraction operator encounters whitespace in the input stream it stops reading and puts the data in the first variable before skipping the whitespace and moving on to the next variable.

cin always leaves a hard return in the stream


# Module 4 Structured Programming and combined Assignment

- Structured Programming

Structured programming theorem states every programming problem can be solved using one of these structures:

Executing one subprogram, and then another subprogram (sequence)

Executing one of two subprograms according to the value of a booleanLinks to an external site. variable (selection)

Executing a subprogram until a boolean variable is true (repetition)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/c18889c0-75f3-4a87-9385-6bd9828e3904)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/c93a8ef5-a7e0-4cd2-a8c0-31e2ca444765)

- Relational Operators

Used to compare numbers to determine relative order (6 relational)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/addd6ced-2e97-4ac4-bde7-031812f8dce9)

3 logical:

`!` not

`&&` and

`||` or

- The if statement

Allows statements to be conditionally executed or skipped over

`if (expression)`
  `statement`

example:

`if (score > 90)`

`{`

  `grade = 'A';`
  
  `cout << "Good job!\n";`
  
`}`

If the expression is true then the statment is executed if flase statement is skipped.

- The if/else statement








