# WEEK 2 OBJECT AND VARIABLES

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
