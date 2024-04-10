# CMPSC 121 TABLE OF CONTENTS
[Module 2: Objects and Variables](./CMPSC121%20Notes.md#module-2-object-and-variables)
- The cout object
- Variables
- Numeric Types in C++
- Strings
- String Member Functions and operators

[Module 3: Input and Output](./CMPSC121%20Notes.md#module-3-input-and-output)
- Formatting Output
- Floating-Point Data Types
- Variable Assignments and Initialization
- Scope
- The cin Object
- Type Casting
- Constants
- C++ Input/Output
- Header File
- Operators
- String Input
- cin vs getline

[Module 4: Structured Programming and Combined Assignement](./CMPSC121%20Notes.md#module-4-structured-programming-and-combined-assignment)
- Structured Programming
- Relational Operators and Expressions
- The if Statement
- Combined Assignment
- if/else statements
- Getting the last digit from an integer
- Nested if statements

[Module 5: Switch Statement and Repitition](./CMPSC121%20Notes.md#module-5-switch-statement-and-repitition)
- The Switch Statement
- Errors
- Repitition
- Introduction to Loops
- Counters/Keeping a Running Total
- Sentinels

[Module 6: While Loop and validating input](./CMPSC121%20Notes.md#module-6-while-loop-and-validating-input)
- The do ...while Loop
- Validating input at the source
- Infinite Loops

[Module 7: For Loops and Loops Wrap up](./CMPSC121%20Notes.md#module-7-for-loops-and-loops-wrapup)
- Lining Up Numbers
- Reading Text Files
- The for Loop
- Loops Wrapup
- Modular Programming
- Defining and Calling Functions
- Sending Data into a Function
- Passing Data by Value

[Module 8: Random Numbers and Simulations](./CMPSC121%20Notes.md#module-8-random-numbers-and-simulations)
- Random Numbers and Simulations
- The Rand Function
- Modeling Using the Rand Function
- Random Numbers Part 2
- Function Calling
- Passing Data by Value
- Using Functions in Menu Driven Programs
- The Return Statement
- Returning Value From a Function

[Module 9: Functions](./CMPSC121%20Notes.md#module-9-functions)
- Reference Parameters
- Void Functions
- Arguments and Parameters
- Value Returning Functions
- Character Testing
- Character Case Conversion
- String Functions
- Demo of using the String Find Function

[Module 10: Functions Continued](./CMPSC121%20Notes.md#module-10-functions-continued)
- Reference Parameters
- Void Functions
- Arguments and Parameters
- Value Returning Functions
- Character Testing
- Character Case Conversion
- String Functions
- Demo of using the String Find Function

[Module 11: Functions Wrap up](./CMPSC121%20Notes.md#module-11-functions-wrapup)
- Overloading Functions
- Function Stubs
- Parameters vs. Arguments
- Recursion
- Recursive gcd Function
- Solving Recursively Defined Problems
- Recursion vs. Iteration
- Function Templates

[Module 12: Structured Data Types - struct/arrays](./CMPSC121%20Notes.md#module-12-structured-data-types--structsarrays)
- Abstract Data Types
- Combining Data into Structures
- Accessing Structure Members
- Initializing a Structure
- Nested Structure
- Structures as Function Arguments
- Returning a Structure from a Function
- Arrays Hold Multiple Values
- No Bounds checking in C++
- Processing Array Contents

[Module 13: Vectors](./CMPSC121%20Notes.md#module-13-vectors)
- Using Parallel Arrays
- Arrays as Function Arguments
- Vector Manipulation
- Vector Parameters
- Common Algorithms
- Fun with Vectors

[Module 14: Searching]

[Module 15: Sorting]

# Module 2 Object and Variables

## - The COUT object

`cout` displays output to the computer screen.
Use stream insertion operator `<<`

example: 

```
cout << "Programming is fun!";
```

Use `endl;` or `"\n"` to create new line of output.

## - Variables

A storage location in memory. It has a name and a type of data it can hold and must be defined before it can be used:

Name should represent variable purpose.

Valid and invalid identifiers for variables:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/a941b78b-ae0e-4ea6-a0db-162b64ca73b0)

## - Numeric Types in C++

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/01e37c48-1d5a-45b0-a63a-204ffa5c69f1)

## - Arithmetic operators

`*` multiplication

`/` division

`+` addition

`-` subtraction

## - Increment and decrement a variable

```
counter++; //add 1 to counter
```
```
counter--; //remove 1 from counter
```

## - interger division and remainder

The `%` operator computes remainder of integer division.

This is the modulus operator.

If to integers are divided the remainder is discarded or truncated.

## - Order of arthmetic operations

left to right multiplication and division, then addition and subtraction

Add parenthesis to change order

## - Strings

Must include the string header:
```
#include <string>
```

Using the cin with >> will cause problems with strings because it stops reading input once whitespace is encountered.  Use the C++ function `getline()`

to find length of a string:

```
string state = "Texas";
int size = state.length()
```

# Module 3 input and output

## - Formatting output

Use header `#include <iomanip>`

As first cout statement:

```
cout << fixed << setprecision(2);
double cost;
cost = 1989.87 / 96.22; // Evaluates to 20.68042
cout << “|” << setw(10) << cost << “|” ;
```

Displays:

```
|      20.68| - 10 print positions, right justified
```

## - Floating Point Data Types

These are: 

double

float 

long double

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/3effeeb1-f536-4e0a-b3f5-04418b7c6f38)

Can be represented in fixed point `(0.000625)` or E notation `(3.14159E1)`

If dividing an integer and you want to keep the remainder turn one of the operans into a floating point `num = 5/9.0` or `n1 = n2/static_cast<double>(n3);`

## - The bool Data Type

Represents values that are true or false.  Bool variables are stored as integers.

`False = 0`

`True = 1`

## - Variable Assignments and Initialization

Assignment statment uses `=`

Variable receiving the value must appear on the left side of the `=` operator

A variable cannot be used before it is defined.

Common header files:

```
#include <iostream> //ALWAYS!!!
#include <iomanip>  //To allow formatting of numbers and strings
#include <cmath>  //To allow use of mathematical functions, eg sqrt or cosine
#include <cstdlib>  //We use this with random numbers
#include <string>  //We need this if we use string variables
```

## - Comments

`//` for single line comments

`/**/` for multi line comments

## - The cin object

cin stands for console input.  This requires the iostream header file.  Used to read input from keyboard.  INput is stored in one or more variables.

```
cin >> height >> width; //recieves input from multiple variables, must be seperated by spaces during keyboard input.
```

cin can be used to assign a string to a string variable as long as the string doesn't contain spaces.

In this case use the `getline(cin, "string variable name here")` function to read until it encounters a hard return in the stream.  It reads and discards the hard return.

## - Type Casting

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/bb8a61b4-4c26-4005-878e-6c50240a6910)

## - Constants

A constant is like a variable because it holds a value, however, that value cannot change.  These are usually declared before main.  Use all caps for constants.

```
const double TAXRATE = 0.06;
```

## - Extraction Operator (>>)

Usage:

```
cin >> age >> weight;
```

When the extraction operator encounters whitespace in the input stream it stops reading and puts the data in the first variable before skipping the whitespace and moving on to the next variable.

cin always leaves a hard return in the stream


# Module 4 Structured Programming and combined Assignment

## - Structured Programming

Structured programming theorem states every programming problem can be solved using one of these structures:

Executing one subprogram, and then another subprogram (sequence)

Executing one of two subprograms according to the value of a booleanLinks to an external site. variable (selection)

Executing a subprogram until a boolean variable is true (repetition)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/c18889c0-75f3-4a87-9385-6bd9828e3904)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/c93a8ef5-a7e0-4cd2-a8c0-31e2ca444765)

## - Relational Operators

Used to compare numbers to determine relative order (6 relational)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/addd6ced-2e97-4ac4-bde7-031812f8dce9)

3 logical:

`!` not

`&&` and

`||` or

## - The if statement

Allows statements to be conditionally executed or skipped over

```
if (expression)
  statement;
```

example:

```
if (score > 90)
{
  grade = 'A';
  cout << "Good job!\n";
}
```

If the expression is true then the statment is executed if flase statement is skipped.

## - The if/else statement

Provides two possible paths of execution.  It performs one statement if the expression is true otherwise performs another statement.

Example:

```
if (transType == 'C')
{
  bonusFactor = 1.03;
}
else
{
  bonusFactor = 1.015;
)
```

Note: if only one statement is being executed you do not need brackets however I always use them regardless.

Be careful testing floats and doubles for equality due to extra small values possibly being added.

## - Combined Assignment

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/856adbdd-2197-4c27-9b99-4fe7db55646c)

instead of writing:

```
num = num * 10;
```

I can write:

```
num *= 10;
```
![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/db32e8d8-c103-4cc4-bd2e-4643fa832a97)

## - Additional information about if/else statements

General format:

```
if (expression)
     statement1;  // or block
else
     statement2;  // or block
```
If the expression is true, then statement1 is executed and statement2 is skipped. If the expression is false, then statement1 is skipped and statement2 is executed.

Removing duplication in if/else statements

Example:

```
if (floor > 13)
{
     actual_floor = floor - 1;
     cout << "Actual floor: " << actual_floor << endl;
}
else
{
     actual_floor = floor;
     cout << "Actual floor: " << actual_floor << endl;
}
```

In this instance the cout statement can be moved outside because it is executing for both regardless.

Revised:

```
if (floor > 13)
{
     actual_floor = floor - 1;
}
else
{
     actual_floor = floor;
}
cout << "Actual floor: " << actual_floor << endl;
```

## - Getting the last digit from an integer:

If the last digit of an integer entered by the user is greater than 5, remove it, multiply the resulting number by 10 and store it in jNumber. Display jNumber. Otherwise, remove the last digit, multiply the resulting number by that digit and store it in eNumber. Display eNumber.

```
int jNumber, eNumber, numberIn,lastDigit;
cout << "Enter an integer greater than 1000" << endl;
cin >> numberIn;
lastDigit = numberIn%10;
if (lastDigit > 5)
{
     jNumber = numberIn / 10 * 10;
     cout << "JNumber = " << jNumber << endl;
}
else
{
     eNumber = numberIn / 10 * lastDigit;
     cout << "ENumber = " << eNumber << endl;
}
```
## - Nested if statements

An if statement that is nested inside another if statement

example:
```
if (score < 100)
{
     if (score > 90)
          grade = 'A';
}
```

An else matches the nearest if that doesn't have an else:
```
if (score < 100)
   if (score > 90)
      grade = 'A';
   else ...  // goes with second if,
              // not first one
```

## - The if/else if statement

```
if (expression)
     statement1;  // or block
else if (expression)
     statement2;  // or block
      
     // other else ifs         
else if (expression)
     statementn;  // or block
```

# Module 5 Switch Statement and Repitition

## - The Switch Statement

C++ has a statement that helps a bit with the readability of situations like this.  It's called The switch statement. ONLY a  sequence of if statements that compares a single integer value against several constant alternatives can be implemented as a switch statement.  They can be used to select among statements from several alternatives and may sometimes be used instead of if/else if statements.

Many programmers consider the switch statement somewhat dangerous and prefer the if statement.

It certainly is not needed and if you can’t write your code using if, you can’t even think about using switch.

Format:

```
switch (IntExpression)
{
case exp1: statement set 1; 
  case exp2: statement set 2;
  ...
  case expn: statement set n; 
  default:   statement set n+1;
}
```
Requirements:

1. IntExpression must be a char or an integer variable or an expression that evaluates to an integer value
2. exp1 through expn must be constant integer type expressions and must be unique in the switch statement
3. default is optional but recommended

How a Switch statement works:

1. IntExpression is evaluated
2. The value of intExpression is compared against exp1 through expn.
3. If IntExpression matches value expi, the program branches to the statement(s) following expi and continues to the end of the switch
4. If no matching value is found, the program branches to the statement after default.

The break statement:

Can be, but should NOT be used to stop execution in the current block.

OK to use to exit a switch statement.

Useful to execute a single case statement without executing statements following it

DO NOT use for anything other than a switch statement

Example:

```
switch (workDay)
{
case 1: cout << “Monday“;
            break;
  case 2: cout << “Tuesday“;
            break;
  case 3: cout << “Wednesday“;
            break;
  case 4: cout << “Thursday“;
            break;
  case 5: cout << “Friday“;
            break;
  default : cout << "invalid day!“;
}
```
A switch statement is great for a menu driven program.

Ex.
```
int digit;
// code to read in digit
switch (digit)
{
  case 1: digit_name = "one"; break;
  case 2: digit_name = "two"; break;
  case 3: digit_name = "three"; break;
  case 4: digit_name = "four"; break;
  case 5: digit_name = "five"; break;
  case 6: digit_name = "six"; break;
  case 7: digit_name = "seven"; break;
  case 8: digit_name = "eight"; break;
  case 9: digit_name = "nine"; break;
  default: digit_name = ""; break;
}
```
Possible to nest branches with multiple cases like so:

```
switch(month)
{
     case 1: case 2: case 12:
          season = “Winter”;
          break;
     case 3: case 4: case 5:
         season = “Spring”;
         break;
     case 6: case 7: case 8:
         season = “Summer”;
         break;
     case 9: case 10: case 11:
          season = “Autumn”;
          break;
}
```
Break:
Every branch of the switch must be terminated by a break statement. If the break is missing, execution falls through to the next branch, and so on, until finally a break or the end of the switch is reached. In practice, this fall-through behavior is rarely useful, and it is a common cause of errors. If you accidentally forget the break statement, your program compiles but executes unwanted code.

## - Errors

Kinds:

Syntax (Error in grammar) double click on error to take to line of code producing error

Logic (Program doesn't produce valid output)

Runtime (Program runs fine until unexpected value is input) trace runtime errors by stepping through the program (f10 for visual studio)

## - Repetition

Three forms

Pre test loop:
```
while(condition)
{
     …
}
```
Post test loop:
```
do
{
     …
} while(condition);
```
For:
```
for(initial;termination;iteration)
```

## - Introduction to Loops

**The While Loop**

Format:
```
while (condition)
{ 
 statement(s);
}
```

If the condition evaluated is true then the statements are executed, and then the condition is evaluated again.  If conditional is false loop exits.
This is a pretest loop because the condition is evaluated before the loop executes.  The loop must contain code to allow the condition to eventually become false otherwise 
you will have an infinite loop.

Example of a loop that won't execute:
```
int number = 6;
while (number <= 5)
{
   cout << "Hello\n";
   number++;
}
```
Example of an infinite Loop:
```
int number = 1;
while (number <= 5)
{
   cout << "Hello\n";
}
```

## - Counters

**Counter:** A variable which is incremented or decremented each time a loop repeats.  Can be used to control the execution of a loop (loop control variable).  The must be initialized before entering loop.

```
// This program displays a list of numbers and their squares.
#include <iostream>
using namespace std;

int main()
{
  const int MIN_NUMBER = 1,  //Starting number to square
            MAX_NUMBER = 10; //Maximum number to square

  int num = MIN_NUMBER;      //Counter

  cout << "Number Number Squared\n";
  cout << "--------------------------\n";

  while (num <= MAX_NUMBER)
  {
      cout << num << "\t\t" << (num * num) << endl;
      num++; //increment the counter
  }
  return 0;
}
```

The counter variable control the loops exit once condition is false.

## - Keep a Running Total

**Running Total:** accumulated sum of numbers from each repitition loop
**Accumulator:** variable that holds running total

Example 1:
```
int sum=0, num=1; // sum is the
while (num <= 10) // accumulator
{   
   sum += num; // accumulator
   num++;     //  counter
}
cout << "Sum of numbers 1 – 10 is"
      << sum << endl;
```
Example 2:
```
int total = 0, num = 0;
cout << “Enter integers, -99 to end”
<< endl;
while(num != -99)
{
cin >> num;
   if(num !=-99)
     total += num;  
}
cout << “The total is “ << total << endl;
```

## - Sentinels
**Sentinel:** Value in a list of values that indicates the end of data.
This value cannot be confused with valid user input/data. ex. -999

Example:
```
//This program calculates the total number of points a
//soccer team has earned over a series of games.  The user
//enters a series of point values, then -1 when finished.
#include <iostream>
using namespace std;

int main()
{
  int game = 1,  //Game counter
  points,        //To hold a number of points
  total = 0;     //Accumulator

  cout << "Enter the number of points your team has earned\n";
  cout << "so far in the season, then enter -1 when finished.\n\n";
  cout "Enter the points for game " << game << ": ";
  cin >> points;

  while (points != -1)
  {
    total += points;
    game++
    cout << "Enter the points for game " << game << ": ";
    cin >> points;
  }
  cout << "\nThe total points are " << total << endl;
  return 0;
)
```

# Module 6 While Loop and Validating Input

## - The do ...while Loop

**Format:**
```
do
     statement;  // or block in { }
while (expression);
```
**Example:**
```
int x = 1;
do
{
    cout << x << endl;
} while(x < 0);
```
These loops always execute at least once then follows logic of a normal while loop exited once condition is false.
Should be implemented when the stateents must be executed before there is any knowledge of its condition.

Example of a do ...while Loop which validates user input:
```
int value;
cout << "Enter a value < 100:";
do
{    
   cin >> value;
   if (value >= 100)
    cout << "Sorry, that is not within range\n"
           << "Try again: ";
} while (value >= 100);
```
This will display a error prompt to the user if invalid input is entered.

This is especially useful in menu driven programs.

## - Validating input at the Source

Examples:
```
cout << “Enter a positive number\n”;
cin >> num; // User may enter anything
if (num < 0)
{
     cout << “Positive number, please!”
     cin >> num
} // Could be negative AGAIN!
```
This will only work once, if user enters a second negative number this won't execute

So implement a do ...while Loop:
```
{
     cout << “Enter a positive number\n”;
     cin >> num;
} while(num < 0);
// If I get here, I can be certain
// num is positive!
```
or
```
{
  cout << “Enter a positive number\n”;
  cin >> num; 
  if (num < 0)
  {
     cout << num << “is NOT positive!”;
  }
} while(num < 0);
```
Using a do ...while Loop for character replies to continue (Y or N)
```
char reply;
…..
do
{
//some code
cout << “Do you wish to continue Y or N?”
        << endl;
   cin >> reply;
} while (toupper(reply) == ‘Y’);
```

**Character Handling Functions**

`toupper()` converts an alphabetical character to upper case.
`tolower()` converts an alphabetical character to lower case. 

Usage:
```
do
{
//Code here
cout << “Continue? Y or N” << endl;
  cin >> reply;
} while (toupper(reply) == ‘Y’);
```
This ensures if a user replies with `'y'` instead of `'Y'` it is read the same and loop continues.

Example: This loop asks user for a vowel and will not continue until a vowel is entered.

```
do
{
     cout << “Enter a vowel” << endl;
     cin >> v;
     v = toupper(v);
} while (v != ‘A’ && v != ‘E’ && v != ‘I’ && v != ‘O’ && v != ‘U’ );
```

# Module 7 For Loops and Loops Wrapup

## - Lining Up Numbers




## - Reading Text Files



## - The for Loop



## - Loops Wrapup




## - Modular Programming



## - Defining and Calling Functions



## - Sending Data into a Function



## - Passing Data by Value



# Module 8 Random Numbers and Simulations

## - Random Numbers and Simulations


## - The Rand Function



## - Modeling Using the Rand Function



## - Random Numbers Part 2


## - Function Calling


## - Passing Data by Value


## - Using Functions in Menu Driven Programs


## - The Return Statement


## - Returning Value From a Function



# Module 9 Functions

## - Returning a Boolean Value


## - Local and Global Variables


## - Static Local Variables


## - Default Arguments


# Module 10 Functions Continued

## - Reference Parameters



## - Void Functions



## - Arguments and Parameters



## - Value Returning Functions


## - Character Testing


## - Character Case Conversion



## - String Functions



## - Demo of using the String Find Function



# Module 11 Functions Wrapup

## - Overloading Functions


## - Function Stubs


## - Parameters vs. Arguments



## - Recursion


## - Recursive gcd Function


## - Solving Recursively Defined Problems


## - Recursion vs. Iteration


## - Function Templates


# Module 12 Structured Data Types -Structs/Arrays

## - Abstract Data Types


## - Combining Data into Structures


## - Accessing Structure Members


## - Initializing a Structure



## - Nested Structure



## - Structures as Function Arguments


## - Returning a Structure from a Function


## - Arrays Hold Multiple Values


## - No Bounds checking in C++


## - Processing Array Contents


# Module 13 Vectors

## - Using Parallel Arrays


## - Arrays as Function Arguments


## - Vector Manipulation


## - Vector Parameters


## - Common Algorithms


## - Fun with Vectors