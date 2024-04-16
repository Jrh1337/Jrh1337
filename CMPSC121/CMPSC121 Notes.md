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
- Modular Programming
- Defining and Calling Functions
- Function Prototypes
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

When Displaying strings using `cout` you can always pad with spaces like so:
```
cout << “July            “ << total << endl;
cout << “August          “ << total << endl;
cout << “September       “ << total << endl;
```
However what if I want to display strings of varying lengths which come from a variable?

use the `setw()` function to calculate length of string variable for output:

```
cout << name << setw(29 – name.length()) << endl;
```
This sets the same print position to 29 and factors length of string variable prior.


## - Reading Text Files

**Using a Loop to Read a File**
Example:
```
while (datafile >> score)
      sum += score;
```
The stream extraction operator returns a value as it reads through the file.  Once end of file is reached the read fails and loop exits.

**Using Files for Data Storage**

Steps:
1. Open the file
2. Use the file
3. Close the File

Use `fstream` header file for file access:
```
#include <fstream>
```

File stream Types:
- **ifstream:** for input from a file
- **ofstream:** for output to a file
- **fstream:** for input from or output to a file

Define file stream objects:
```
ifstream infile;
ofstream outfile;
```
**Opening Files**

Use the open member function:
```
infile.open("DeskTop\\Inventories\\inventory.txt");
outfile.open("report.txt");
```

Implementing a test for open file errors:
```
infile.open("test.txt");
if (!infile)
{
     cout << "File open failure!";
}
```
and fail member function:
```
if (infile.fail())
```

**Using Files**

Use `<<` to send data to a file and `>>` to copy data from a file to variables:

```
outfile << "Inventory report";

infile >> partNum;
infile >> qtyInStock >> qtyOnOrder;
```

**Closing Files**
```
infile.close();
outfile.close();
```

**Letting a user specify a File name:**
```
string filename;
cout << “Enter name of file” << endl;
cin >> filename;
fin.open(filename);
```

Example of Standard code for Reading a File:
```
ifstream fin;  //Creates a filestream
cout << “Enter file name” << endl;
cin >> filename;
fin.open(fileName); //Associates it with a
                             //physical file   
if (fin.fail()) //checks to see if we can open it
  cout << “Unable to open file!”;
else
{
  while (fin >> partno >> ohb >> cost)//reads it
  {
     // code to process file
     totalValueOfInventory += (ohb * cost);
  }
}
fin.close();  // Closes the file
```
Example of Reading Strings from a File:
```
while (getline(infile, bookTitle))
{
  infile >> numSold >> price;
  saleAmt = numSold*price;
  totalSales += saleAmt;
  cout << bookTitle
          << setw(50 – bookTitle.length())
          << saleAmt << endl;
  infile.ignore(80, '\n');  //???????
}
```

## - The for Loop

General Format:
```
for(initialization; test; update)
         statement; // or block in { }
```
Mechanics:
1. Perform Initialization
2. Evaluate Test Expression
   - If true, execute statement
   - If false terminate loop
3. Execute update then re-evaluate test expression

Example:
```
int count;

for (count = 1; count <= 5; count++)
     cout << "Hello" << endl;
```

**When to Use a for Loop**
In any situation that clearly requires:

- an initialization
- a false condition to stop the loop
- an update to occur at the end of each iteration
- 
The for Loop is a pretest loop which means that it tests its test expression before each iteration. The following loop will never iterate:
```
for (count = 11; count <= 10; count++)
     cout << "Hello" << endl;
```

Example:
```
int sum = 0;

int num;

   for (num=1; num <= 10; num++)
       sum = sum + num;
 cout << "Sum of the numbers 1–10 is "

    << sum << endl;

 cout << “num = “ << num << endl;
// What prints? num = 11
```


## - Modular Programming
**Modular Programming:** Breaking a program up into smaller managable functions or modules

**Function:** A collection of statements to perform a task

Idea is to implement functions to reduce the size of main

A Payroll Example:

PseudoCode:
```
READ in PAY_RATES
READ in EMPNO & HOURS
CALCULATE PAY & DEDUCTIONS
UPDATE YTD FILE
PRINT CHECKS
```

Code using functions:
```
int main() //it’s pretty obvious
{             //what this program
              // does 
    // Declarations, etc
     …
    readPayRates( …);
    readEmployeeData( …);
    calculatePayDeductions( …);
    updateYTDFile( …);
    printChecks( …);
   …
}
```



## - Defining and Calling Functions

**Function Call:** Statement causes a function to Execute.
**Function Definition:** Statements which make up a function.

Function Definition includes:
- Return Type: Data type of the value that function returns to the part of the program that called it.

- Name: Name of the function. Convention follows same rules as variables.

- Parameter List: Variables containing values passed to the function

- Body: Statements that perform the functions task.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/137d3f1d-32e5-4034-887b-02bf1d740f49)

If a function is supposed to return a value the type of value must be indicated

This function returns an int:
```
  int area(int length, int width)
{
   int a = length * width;
   return a;
}
```

This function doesn't return a value (void):
```
void printHeading()
{ 
     cout << "Monthly Sales\n";
}
```
Calling a function:
```
printHeading(); //Place arguments being passed to the function in ()
```
Example of Program using a function:
```
//This program has two functions main and
//displayMessage
#include <iostream>
using namespace std;
void displayMessage(); //Prototype
int main() // Beginning of main
{
   cout << “Hello from main” << endl;
   displayMessage();  // call to displayMessage
   cout << “Back in main again” << endl;
}
void displayMessage() //header
{
   //Body
   cout << “Hello from displayMessage” << endl;
}
```
**Calling Functions**

Main can call any number of functions and functions can call other functions as well.
The compiler must know the following about a function before it is called:
1. Name
2. Return Type
3. Number of Parameters
4. Data Type of each parameter

## - Function Prototypes

You can notify the compiler about a function before a call to the function by establishing a function prototype.

Place function prototypes before main:
```
#include <iostream>
using namespace std;

//function prototypes
void first();
void second();

int main()
{
....
```
Placing function definition below main is how I prefer to do it.


   
## - Sending Data into a Function

You can pass values into a function at time of call:

`c = pow(a, b);`

The values being passed to a function are **arguments**.  Variables in a function that hold the values being passed as arguments are **parameters**.

Example of a function witha parameter variable:
```
void displayValue(int num)
{
  cout << "The value is " << num << endl;
}
```
`num` is a parameter.  It accepts any integer value being passed to the function.

**Parameters, Prototypes and Function Headers**

A function prototype must include the data type of each parameter inside the paranthesis, header must include a declaration for each parameter in its `()`
```
void evenOrOdd(int);                   //prototype

evenOrOdd(val);                          //call

void evenOrOdd(int num)           //header
{
    if (num %2 == 0)                   //Body
        cout << num << “ is even!” << endl;
    else
        cout << num << “ is odd!” << endl;
}
```
Notes on Function Calls:

- Value of argument is copied into parameter when the function is called
- A parameters scope is the function which uses it
- Functions can have multiple parameters
- There must be a data type listed in the prototype
- Arguments will be promoted or demoted as necessary to match parameters

**Passing Multiple Arguments**

The number of arguments in the call must match the number of arguments in the prototype and definition.  The first argument will initialize the first parameter and so forth.

Example of a function which passes multiple arguments:
```
//This program demonstrates a function with three parameters.
#include <iostream>
using namespace std;

//Function Prototype
void showSUm(int, int, int);

int main()
{
  int value1, value2, value3;

  //Get three integers
  cout << "Enter three integers and I will display ";
  cout << "their sum: "
  cin >> value1 >> value2 >> value3;

  //Call showSum passing three arguments
  showSum(value1,value2, value3);
  return 0;
}
//Function definition
void showSum(int num1, int num2, int num3)
{
  cout << (num1 + num2 + num3) << endl;
}
```
Notice that in the function definition the names of the variables do not have to match the names of the argument variables being passed to the function in main.

## - Passing Data by Value

**Pass by Value**: When an argument is passed to a function, its value is copied into the parameter.  Changes to the parameter in the function do not affect the value of the argument.  

# Module 8 Random Numbers and Simulations

## - Random Numbers and Simulations

**Simulation**: Uses a computer program to simulate an activity in the real world.

**Random Numbers**: Used to write programs to simulate real world chance events (ex. rolling dice)

## - The Rand Function

Need `#include <cstdlib>` header for random number generation.

C++ has a random number generator `rand()`

Simply calling rand will produce a pseudorandom intger between 0 and RAND_MAX

Rand only uses one pseudorandom sequence and it starts from the same place.  Every time you restart your program you will generate the same random numbers because of this.

You get true random numbers by seeding the rand function.

Calling `srand` sets where `rand` starts.  srand is also defined in the cstdlib header.

A good way to seed rand is by calling the time function as time is always changing.

Calling `time(0)` or `time(NULL)` will produce the current time.

Must include the `#include <ctime>` header

Calling srand and calling time will look like this:
```
srand(time(NULL)); seed rand()
```
**Important info:**

`srand(time(NULL));` goes in main, near the top and never in a loop or any other function than main

This is not generating a random number only seeds rand.

## - Modeling Using the Rand Function

Consider rolling a pair of dice.  You must match programs to simulate how an event occurs in the real world when trying to recreate a simulation.

Each dice roll must be calculated independently before taking their sums or else the probability will be effected.

If calculated together instead of seperately the probability of rolling a 12 will be equal to rolling a 7, even though there is only one roll that will produce a 12 but multiple rolls that will produce a 7. 


## - Random Numbers Part 2

Simulate flipping a coin:
```
flip = rand() % 2;
if (flip == 0)
    cout << “Heads\n”;
 else
    cout << “Tails\n”;
```
Simulate rolling a single die:
```
roll = rand() % 6 + 1;
```
rand() % 6 produces a number in the set {0, 1, 2, 3, 4, 5} and by adding 1 to it, we get a number in the set {1, 2, 3, 4, 5, 6}.

Full program for rolling a single die:
```
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>
using namespace std;
int main()
{
     srand(time(NULL)); //Seed the random number
                                      //generator
     for(int i=0;i<10;i++)  //Roll 10 times
        cout << setw(5) << rand()%6 + 1;
     cout << endl;
}
/*
 1    4    2    4    4    2    3    4    1    5
*/
```
Rolling a pair of dice:
```
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
   srand(time(0));
  
   for (i = 1; i <= 10; i++)
   {
      int d1 = rand() % 6 + 1;
      int d2 = rand() % 6 + 1;
      cout << d1 << " " << d2 << endl;
   }
   cout << endl;
   return 0;
}
```
## - Function Calling
Value of argument is copied into parameter when the function is called. A parameter’s scope is the function which uses it. Function can have multiple parameters. There must be a data type listed in the prototype () and
an argument declaration in the function header () for each parameter. Arguments will be promoted/demoted as necessary to match parameters

```
int main()
{
   double z = pow(2, 3.0);
   ...
}
```
Main calls the `pow` function the two arguments in () are passed to the function and return a value back to main which is now stored in the variable `z`

## - Passing Data by Value

**Pass by value:** when an argument is passed to a function, its value is copied into the parameter.  Changes to the parameter in the function do not affect the value of the argument.

## - Using Functions in Menu Driven Programs

Example:
```
cout << "Select aaction: " << endl;
cout << "1. List Employees" << endl;
cout << "2. Add New Employee" << endl;
cout << "3. Delete Employee" << endl;
cout << "4. Exit" << endl;
do
{
  cin >> action;
  switch(action)
  {
    case 1:
      listEmployees(eList);
      break;
    case 2:
      addEmployee(eNum, name, address, city, state);
      break;
    case 3:
      deleteEmplyee(eNum);
      break;
    case 4:
      cout << "Ending program" << endl;
      break;
    default:
      cout << "Invalid choice!\n";
  }
}while (action != 4);
```

## - The Return Statement

Used to end the execution of a function.  They can be placed anywhere inside a function, however statements after a return statement wont be executed.  In the case of a `void` function with no return statement,
the function ends at its last `}`.

**Single Entry - Single Exit (SESE)**

Any structure is required to have single entry and single exit point.  Don't use break (except in a switch) and don't use a return statement in a void function.

## - Returning Value From a Function

Example:
```
int sum(int num1, int num2)
{
   return num1 + num2;
}
```
Functions can return values of expression as seen above or can return just the result at the end like below:
```
int sum(int num1, int num2)
{
   int result;
   result = num1 + num2;
   return result;
}
```
Local variables can be declared in functions:
```
int area (int l, int w)
{
   int a;
   a = l * w;
   return a;
}
```
`l` and `w` did not have to be declared because they are already being passed as arguments



# Module 9 Functions

## - Returning a Boolean Value

A function can return true or false.  To do this declare return type of the function as `bool`.  A function body must contain return statements that return true or false.

Validation:
```
bool isLeapYear(int year)
{
   bool OK = false;
   OK = ((year % 400 == 0) || ((year % 4 == 0)
           && (year % 100 !=0)));
     return OK;
}
```
Usage:
```
cout <<“Enter a date mm dd yy” << endl;
cin >> month >> day >> year;
if (isLeapYear(year))
{
    cout << year << “ is a leap year!” << endl;
}
```

## - Local and Global Variables

Variables defined inside a function are local to that function. They are hidden from the statements in other functions, which normally cannot access them. Because the variables defined in a function are hidden, other 
functions may have separate, distinct variables with the same name.

**Local Variable Lifetime:** A function’s local variables exist only while the function is executing. This is known as the lifetime of a local variable. When the function begins, its local variables and its parameter variables are created in memory, and when the function ends, the local variables and parameter variables are destroyed. This means that any value stored in a local variable is lost between calls to the function in which the variable is declared.

**Global Variables and Constants:** Declared outside of all functions, this can be accessed by all functions.  Should only be used for constants

**Initializing Global and Local Variables:** Global variables are automatically initialized to `0` or `NULL` when defined.

Objects of the string type are always initialized to the `NULL` string for local or global strings.  Any local variables must be initialized by the programmer.

## - Static Local Variables

**Local variables do not retain values between function calls**

To maintain a variables value inside a function use a static variable:
```
void showStatic()
{
  static int statNum = 5;

  cout << "statNum is " << statNum << endl;
  statNum++;
}
```
Once a local static variable is initialized it only occurs once any further changes when calling the function again will continue to alter the variable without it being set to 5 again.

## - Default Arguments

An argument that is passed automatically to a parameter if the argument is missing on the function call.

Must be a constant declared in prototype:
```
void evenOrOdd(int = 0);
```
It can be declared in header if no prototype. Multi-parameter functions may have default arguments for some or all of them:
```
int getSum(int, int=0, int=0);
```
If not all parameters have default values the defaultless ones must be declared first in the parameter list like so:
```
int getSum (int, int, int = 0);  //YES
int getSum (int, int = 0, int); //NO
```

Default values must go in the function prototype.

# Module 10 Functions Continued

## - Reference Parameters
**Using reference variables as parameters**

These are a mechanism that allows a function to work with the original argument from the function call, not a copy of the argument. They allow the function to modify values stored in the calling environment, and provide a way for the function to ‘return’ more than one value.

**Passing by Reference**

A reference variable is an alias for another variable.  Defined with an ampersand `&`
```
void getDimensions(int &l, int &w);
```

Changes to a reference variable are made to the variable it refers to.  Use reference variables to implement passing parameters by reference.

**Reference Parameters**

You can also pass by reference to a function.  Instead of copying data from the arguments to the parameters, the parameter is the argument.  Changes made to the parameter variables are actually being made to the argument variable.

```
int main()
{
   int cost;
   int &price = cost;  //price is an alias
   int &value = price; //so is value   
   cost = 100;
   cout << “Cost = “ << cost << endl;
   cout << “Price = “ << price << endl;
   cout << “Value =” << value << endl;
   cout << “Cost Addr= “<< &cost<< ‘\n’;
   cout<<“Price Addr=“ << &price<< ‘\n’;
   cout<< “Value Addr=”<< &value <<‘\n’;
   return 0;
}
```

The name of a variable with `&` in front of it means the address of the variable.

```
int count = 0;
count++;
cout << count << “ “ << &count;
```
This will display `1 0x124DCF` 1 and whatever address the compiler has assigned to count.

## - Void Functions

2 types of parameters in void functions: value and reference.  

- Value: Parameteers are not permanently changed by the function.  This is because only a copy of the value is sent to the function.
- Reference: These parameters can be permanently changed by the function.  This is because the memory address of the variable is being sent to the function.
Instead of copying the value it tells the function the address of the argument and gives it permission to change the value stored in there.

**Using Reference Parameters for INput**
```
void get_cost_data (int &quantity, double &price)
{
   cout << “Enter Quantity “
   cout << “-999 to quit\n”;
   cin >> quantity;
   cout << “Enter price\n”;
   cin >> price;
}
```

## - Arguments and Parameters

**Parameters** appear in the function header:
```
void get_cost_data(int &quantity, double &price)
```
Arguments appear in the function call:
```
get_cost_data (quantity, price);
```


## - Value Returning Functions

Value returning functions, with rare exceptions, have only value parameters. One exception might be to write a get_data function which fills an array as a bool function which returns false if unable to open the file.

## - Character Testing

Useful builtin Functions for use with characters: (These do not work with strings)

| Function | Meaning |
| --- | --- |
| isalpha | true if arg. is a letter, false otherwise |
| isalnum | true if arg. is a letter or digit, false otherwise |
| isdigit | true if arg. is a digit 0-9, false otherwise |
| islower | true if arg. is lowercase letter, false otherwise |
| isprint | true if arg. is a printable character, false otherwise |
| ispunct | true if arg. is a punctuation character, false otherwise |
| isupper | true if arg. is an uppercase letter, false otherwise |
| isspace | true if arg. is a whitespace character, false otherwise |

Usage Example:
```
cout << "Enter any character: ";
cin.get(input);
cout << "The character you entered is: " << input << endl;
if (isalpha(input))
  cout << "That's an alphabetic character.\n";
...
```

## - Character Case Conversion

Functions:

`toupper` if `char` argument is lowercase letter, return the uppercase equivelent.

example:
```
char ch1 = 'H';
char ch2 = 'e';
char ch3 = '!';

cout << toupper(ch1);  // displays 'H'

cout << toupper(ch2);  // displays 'E'

cout << toupper(ch3);  // displays '!'
```
`tolower` if `char` argument is uppercase return lowercase equivalent:
```
char ch1 = 'H';
char ch2 = 'e';
char ch3 = '!';

cout << tolower(ch1);  // displays 'h'

cout << tolower(ch2);  // displays 'e'

cout << tolower(ch3);  // displays '!'
```

**String Comparison**

You can use relational operators to compare string objects:
```
  string str1 = "George",
              str2 = "Georgia";
  if (str1 < str2)
    cout << str1 << " is less than "
            << str2;
```
**String Operators:**

| Operator | Meaning |
| --- | --- |
| >> | extracts characters from stream up to whitespace, insert into string |
| << | inserts string into stream |
| = | assigns string on right to string object on left |
| += | appends string on right to end of contents on left |
| + | concatenates two strings |
| [] | references character in string using array notation |
| >,>=,<,<=,++,!= | relational operators for string comparison.  Return true or false |

Example:
```
string word1, phrase;
string word2 = " Dog";
cin >> word1; // user enters "Hot Tamale"
                        // word1 has "Hot"
phrase = word1 + word2; // phrase has
                                           // "Hot Dog"
phrase += " on a bun";
for (int i = 0; i < 16; i++)
     cout << phrase[i];
   // displays "Hot Dog on a bun"
```

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/f479fe45-0097-4bd9-999d-1bc9a93182d6)


## - String Functions

Strings are objects of the string class.  They contain data like any other variable but also properties and methods to inquire about and manipulate that data.

`.length()`
`.substr(start, numchar)`
`.find(what, where)`

**Length Function**

Function length returns an unsigned integer equal to number of characters currently in the string.

Function size returns the same value.

**String Function**

The `length` memember function is invoked with dot notation with string name before function.
```
int n= name.length();
```

**Find Function**

Find returns an unsigned integer value that is the beginning position for the first occurence of a particular substring within the string.  The substring argument can be a string constant, expression or char value.

If the substring was not found function find returns `string::npos`

If start position is ommited starts at beginning of string

**substr Function**

Returns a particular substring of a string.  First argument is an unsigned integer which specifies starting position within the string.  Second argument specifies desired length.
```
string fullname, first, last;
fullname = "Emily Blunt";

first = fullname.substr(0,5);
last = fullname.substr(6, 5);
cout << last << ", " << first;
```
If you do not specify how many characters you want to take in the argument you will get every character after the starting position.

If you do not enter any arguments you get all characters of the string.

Positions of characters within a string are numbered starting at 0.


## - Demo of using the String Find Function
```
#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <string>
using namespace std;

int main ()
{
  string haystack, linein;
  string needle = "eedle";
  int pos, pos1, count = 0;
  ifstream fin;
  fin.open("needles.txt");
  if (fin.fail())
    cout << "Unable to open file";
  else
    while (getline(fin,linein))
    {
      haystack += linein;
    }
    fin.close();
pos1 = 0;
  do
  {
    pos = haystack.find(needle, pos1);
    if (pos != -1)
    if ((haystack.substr(pos -1,1) == "N") || (haystack.substr(pos - 1,1) == "n"))
      {
      cout << "Found " << haystack.substr(pos -1,1) << needle << " at "
            << setw(6) << pos
            << " :" << haystack.substr(pos - 30, 50) << endl;
      count++;
      }
  pos1 = pos + 1;
  }while (pos != -1);
    cout << endl << "Found needle " << count << " times." << endl;;
}
```


# Module 11 Functions Wrapup

## - Overloading Functions

Functions can have the exact same name as long as they have different parameter lists.  The compiler will determine which function version to call based on argument and parameter list.

Ex:
```
int cube (int n);
double cube (double n);
void prtline (int l);
void prtline (int l, char ch);
```

Three different versions of the same swap function but for different data types:
```
//String version
void swapit (string& s, string& t)
{
  string temp;
  temp = s;
  s = t;
  t = temp;
}

//Double version
void swapit (double& x, double& y)
{
  double temp;
  temp = x;
  x = y;
  y = temp;
}

//int version
void swapit (int& a, int& b)
{
  int temp;
  temp = a;
  a = b;
  b = temp;
}
```

The different numbers or types of parameters are the functions **signature**
based on:
1. # of parameters
2. the types

Number of parameters differentiation:
```
a = round(x) or a = round(x,3)

double triangle_area
  (double base, double height);
double triangle_area
  (double a, double b, double c);
```

Overloaded functions have the same name but different parameter lists. Sometimes this is referred to as having a different signature. Overloaded functions perform the same or similar tasks. Overloaded functions take different parameter types or different number of parameters. The compiler will determine which version of function to call by the argument and parameter lists.

## - Function Stubs

A function stub is an empty or predictable function definition used as a placeholder or debug notification.
```
void payment(double a, double r, int m) 
     //empty stub
{
}
  or
double payment(double a, double r, int m) 
    //notifying stub
{
  return 0;
}
```
Example I'd like to write a program that can calculate the volume of a sphere but I don't know the formual at the moment:
```
double calc_vol(double);
int main()
{
   double radius, volume;
   cout << “Enter the radius\n”;
   cin >> radius;
   volume = calc_vol(radius);
   cout   << “The volume with radius\n”;
   cout << radius << “ is “ << volume << “\n”;
   return 0;
}
```
```
double calc_vol(double r)
{
   double vol;
   cout << “Look up formula\n”;
   vol = 9 * r; // Fix this!
   return vol;
   //STUB STUB STUB!!!!
}
```
```
double calc_vol(double r)
{
   const double PI = 3.14159;
   double vol;
   vol = 4*PI*r*r*r/3;
   return vol;
}
```

**Drivers:** Test functions by calling them.  Use for testing and debugging programs and functions for logic and design.

## - Recursion

**Purpose:** used to reduce a complex problem to a simpler-to-solve problem.  The simpler-to-solve problem is known as the **base case**.  Recusrive calls stop when the base case is reached.

A recursive function contains a call to itself.

```
countDown(5);

void countDown (int num)
{
  if (num == 0)
    cout << "Blast off!";
  else
  {
    cout << num << "...\n";
      countDown(num-1); //recursive call
  }
}
```
**Stopping Recursion**

Must include a test to determine if another recursive call is to be made or if recursion should stop with the current call. `if (num == 0)`

A different value is passed back unto the function until the criteria for the base case is met.

**Types of recursion**
1. Direct: Function calls on itself
2. Indirect: Function A calls function B which calls ..., which calls function A

## - Recursive gcd Function

Greatest common divisor (gcd) is the largest factor that two integers have in common. Computed using Euclid's algorithm:

gcd(x, y) = y if y divides x evenly
gcd(x, y) = gcd(y, x % y) otherwise

gcd(x, y) = y is the base case

int gcd(int x, int y)

```
{
   int z;
   if (x % y == 0)
         z = y;
   else
         z = gcd(y, x % y);
   return z;
}
```

## - Solving Recursively Defined Problems

The natural definition of some problems leads to a recursive solution. Example: Fibonacci numbers: 0, 1, 1, 2, 3, 5, 8, 13, 21, ...

After the starting 0, 1, each number is the sum of the two preceding numbers

Recursive solution:
```
fib(n) = fib(n – 1) + fib(n – 2);
```
Base cases: `n <= 0, n == 1`
```
int fib(int n)
{
     if (n <= 0)
        n = 0;
     else if (n == 1)
        n =  1;
     else
        n = fib(n – 1) + fib(n – 2);
   return n;
}
```

## - Recursion vs. Iteration

**Benefits (+), disadvantages(-) for recursion:**

- +Models certain algorithms most accurately
- +Results in shorter, simpler functions
- May not execute very efficiently

**Benefits (+), disadvantages(-) for iteration:**

- +Executes more efficiently than recursion
- Often is harder to code or understand

## - Function Templates

We can instruct the compiler to use a template to create a function for any type.

Function templates tell the compiler that the definition will be a function template

Before the declaration and the definition we put:

```
template <class Type>
```

Then use `Type` in place of actual data types.  You could rename type into anything.

Good for creating sorting functions meant to sort different data types.

```
template <class Type>
void swapit (Type& a, Type& b)
{
     Type hold;
     hold = a;
     a = b;
     b = hold;
}
```

This avoids creating 4 seperate overloaded functions.

Template with multiple types:
```
template <class T1, class T2>
T1 incr (T1 number, T2 step)
// Increment a number by a step value
{
  T1 retVal;
  retVal = number +
     static_cast<T1>(step);
  return retVal;
}
```
Each templated function requires a template <class T>  line. Replace each instance of the type with T. If multiple types are to be used, employ: template <class T1, class T2> With multiple class types.

With templated functions, instead of the normal prototype before main and definition after main, we usually just place the definition before main:
```
template <class t>
void Swap(t a, t b)
{
   t temp;
   temp = a;
   a = b;
   b = temp;
}
int main()
{
    // code here
}
```


# Module 12 Structured Data Types -Structs/Arrays

## - Abstract Data Types

A data type that specifies values that can be stored and operations that can be done on the values. User of an abstract data type does not need to know the implementation of the data type, e.g., how the data is stored. ADTs are created by programmers.

- Abstraction: a definition that captures general characteristics without details Ex: An abstract triangle is a 3-sided polygon. A specific triangle may be scalene, isosceles, or equilateral
- Data Type defines the values that can be stored in a variable and the operations that can be performed on it


## - Combining Data into Structures

Format of a struct:
```
struct <structName>
{
  type1 field1;
  type2 field2;
  . . .
};
```
Allows multiple variables to be grouped together.

Example:
```
struct Student
{
  int studentID;
  string name;
  int yearInSchool;
  double gpd;
};
```

Struct declaration does not allocate memory or create variables.  To define a variable use the structure tag as the data type name:
```
Student bill;
```

## - Accessing Structure Members

Use the dot operator to access struct variables:
```
cin >> stu1.studentID;
getline(cin, stu1.name);
stu1.gpa = 3.75;
```
**Displaying a struct Variable**
Must display each field seperately:

```
cout << bill; // won’t work
cout << bill.studentID << endl;
cout << bill.name << endl;
cout << bill.yearInSchool;
cout << " " << bill.gpa;
```
**Comparing struct Variables**
Cannot compare directly:
```
if (bill.studentID ==  
              william.studentID) ...
```
Must compare on a field basis.

## - Initializing a Structure

struct variable can be initialized when defined:
```
Student s = {11465, "Joan", 2, 3.75};
```
or member-by-member after definition:
```
s.name = "Joan";
s.gpa = 3.75;
```
You can initialize some members but can't skip over members order:
```
Student bill = {14579};
Student s = {1234, "John", ,2.83}; // illegal
```

You cannot initialize in the structure declaration.

## - Nested Structure

A struct can contain another struct as a member:
```
 struct PersonInfo
  {     string name,
    address,
    city;
  };
  struct Student
  {  int studentID;
  PersonInfo pData;
  short yearInSchool;
  double gpa;
  };
```
Use the dot operator multiple time when accessing a nested struct:
```
Student s;
s.pData.name = "Joanne";
s.pData.city = "Tulsa";
```

## - Structures as Function Arguments

May pass members of struct variables to functions:
```
 computeGPA(stu.gpa);
```
You can also pass entire structs to functions:
```
showData(stu);
```

structs can be passed as refernce to modify contents of a struct variable

**Structures as Function Arguments**

Using value parameter for structure can slow down a program, waste space. Using a reference parameter will speed up program, but function may change data in structure. Using a const reference parameter allows read-only access to reference parameter, does not waste space, speed.


## - Returning a Structure from a Function

Function can return a struct:
```
Student getStudentData();  // prototype
stu1 = getStudentData();   // call
```

Function must define a local structure:
- for internal use
- for use with a return statement

Example:
```
Student getStudentData()
{    Student tempStu;
      cin >> tempStu.studentID;
      getline(cin, tempStu.pData.name);
      getline(cin, tempStu.pData.address);
      getline(cin, tempStu.pData.city);
      cin >> tempStu.yearInSchool;
      cin >> tempStu.gpa;
      return tempStu;
}
```

## - Arrays Hold Multiple Values

**Array:** Variable that can store multiple values of the same type.  Values are stored in adjacent memory locations.  Declare using `[]`

```
int tests[5];
```
- int is the data type of the array elements
- tests is the name of the array
- `[5]` is the size declarator.  Shows number of elements in the array

You can use a named constant as a size declarator:
```
const int SIZE = 5;
int tests[SIZE];
```
This makes it more convenient to change the size of an array.

**Array vs. Vector**
Vectors are a super set of array.  Vectors can be handled in the same way but have greater functionality and are easier to use.

**Simple vs Structured Data Types**

Simple: variables of that type can store only one value at a time:
```
int num;
```

Structured Data Type: Each data item is a collection of other data items.
```
int nums[3];
```

**Reference Data Type**

Each element in an array is assigned a unique subscript.  Subscripts start a 0.  The last elements subscript is n-1 where n is the number of elements in the array.

**Accessing Array Elements**

Arrays must be accessed by there individual elements

Array elements can be used as regular variables:
```
tests[0] = 79;
cout << tests[0];
cin >> tests[1];
tests[4] = tests[0] + tests[1];
```

**Using a Loop to step through an Array**
```
const int ARRAY_SIZE = 5;
int numbers[ARRAY_SIZE];

for (int count = 0; count < ARRAY_SIZE; count++)
       numbers[count] = 99;
```

**Default Initialization**

Global Array: all elements initialized to 0 by default.

Local Array: All elements uninitialized by default.

## - No Bounds checking in C++

C++ will let you use an invalid subscript for an array outside of its bounds.

Doing so can cause some serious issues and crashes.  Off by one errors happen when you start subscripts at 1 rather than 0:
```
// This code has an off-by-one error.
const int SIZE = 100;
int numbers[SIZE];
for (int count = 1; count <= SIZE; count++)
     numbers[count] = 0;
```
**Filling an Array:**
```
const int SIZE = 500;
int numbers[SIZE];
..
..
for(int i=0;i<SIZE;i++)
{
     numbers[i] = rand() % 100;
}
```

## - Processing Array Contents

Array elements can be treated as ordinary variables of the same type as the array
```
tests[i]++; // add 1 to tests[i]
tests[i++]; // increment i, no
                         // effect on tests
```

**Array Assignement**

To copy one array to another use:
```
for (i = 0; i < ARRAY_SIZE; i++)
       newTests[i] = tests[i];
```

**Printing the contents of an Array**

You can display the contents of a character array by sending its name to cout:
```
char fName[] = "Henry";
cout << fName << endl;
```
All other types of arrays must be printed by element

**Summing and averaging array elements**

To add:
```
int tnum;
double average, sum = 0;
for(tnum = 0; tnum < SIZE; tnum++)
                         sum += tests[tnum];
```
Now you can compute average:
```
average = sum / SIZE;
```
Example:
```
const int NUM_SCORES = 100;
double total = 0;  // Initialize accumulator
double average;    // Will hold the average
for (int i=0;i< NUM_SCORES;i++)
    total += val;
average = total / NUM_SCORES;
```

**Finding the highest Value from an Array**

```
int count;
int highest;
highest = numbers[0];
for (count = 1; count < SIZE; count++)
{
   if (numbers[count] > highest)
      highest = numbers[count];
}
```
Once complete the highest variable will contain the highest value in the numbers array.

**Finding the lowest value in an Array**
```
int count;
int lowest;
lowest = numbers[0];
for (count = 1; count < SIZE; count++)
{
   if (numbers[count] < lowest)
      lowest = numbers[count];
}
```
Once complete lowest variable will contain the lowest value in the numbers array.

If it is unknown how much data an array will be holding make the array large enough to hold the largest expected number of elements 
use a counter variable to track number of items stored in array.

**Comparing Arrays**

Must compare element by element:
```
const int SIZE = 5;
int firstArray[SIZE] = { 5, 10, 15, 20, 25 };
int secondArray[SIZE] = { 5, 10, 15, 20, 25 };
bool arraysEqual = true; // Flag variable
int count = 0;                  // Loop counter variable
// Compare the two arrays.
while (arraysEqual && count < SIZE)
{
   if (firstArray[count] != secondArray[count])
      arraysEqual = false;
   count++;
}
if (arraysEqual)
   cout << "The arrays are equal.\n";
else
   cout << "The arrays are not equal.\n";
```

# Module 13 Vectors

## - Using Parallel Arrays

Two or more Arrays that contain related data.  A subscript is used to relate arrays: elements at same subscript are related.  Arrays may be different types.

example:
```
const int SIZE = 5;        // Array size
int id[SIZE];                  // student ID
double average[SIZE]; // course average
char grade[SIZE];        // course grade
...
for(int i = 0; i < SIZE; i++)
{
     cout << "Student ID: " << id[i]
             << " average: " << average[i]
             << " grade: " << grade[i]
             << endl;
}
```


## - Arrays as Function Arguments

To pass an array to a function use the array name as the argument:
```
showScores(tests);
```

To define a function that takes an array parameter, use `[]` for the array argument:
```
void showScores(int []);
         // function prototype
void showScores(int tests[])
        // function header
```

When passing an array to a function, it is common to pass array size so that the function knows how many elements to process:
```
showScores(tests, ARRAY_SIZE);
```

Array size must be reflected in the prototype header:
```
void showScores(int tests[], int size);
          // function prototype
void showScores(int tests[], int size)
         // function header
```

Example Program of an array being passed to a function:
```
#include <iostream>
using namespace std;

void showValues(int [], int);  //Function Prototype

int main()
{
  const int ARRAY_SIZE = 8;
  int numbers[ARRAY_SIZE] = {5, 10, 15, 20, 25, 30, 35, 40};

  showValues(numbers, ARRAY_SIZE);
}

//This function accepts an array of integers and the arrays size as its arguments.  Contents are displayed.

void showValues(int nums[], int size)
{
  for (int index = 0; index < size; index++)
    cout << nums[index] << " ";
  cout << endl;
}

?
// output
//5 10 15 20 25 30 35 40
```

**Modifying Arrays in Functions**
Array names in functions are like reference variables - changes made to an array in a function are reflected in the actual array in the calling function.  

Exercise caution that you are not changing the array in a function unless you want to.

What if I don't want the function to change the array?

```
int findmax(const int grades[]);
const int SIZE = 350;
int grades[SIZE], i, max;
...
max = findmax(grades);
```
Pass array as a const to prevent changes in the function.

**Reading a File into an Array**

Two events that will end the read loop:
1. End of file
2. End of Array

**Visiting all elements in an Array**
```
for (int i = 0; i < CAPACITY; i++)
{
   cout << values[i] << endl;
}
```
Note that the loop condition is that the index is less than CAPACITY. That's because there is no element corresponding to data[10]. But CAPACITY (10) is the number of elements we want to visit.

**Swapping elements**
```
void swapit (int & a, int &b)
{
   int hold;
   hold = a;
   a = b;
   b = hold;
}
```

The call:
```
if(num[i] > num[j])
swapit(num[i], num[j);
```

**Copy Selected Elements**
```
const int SIZE=350;
int all[SIZE], even[SIZE], i, j;
// code here to fill the array
j = 0;
for (i=0; i<SIZE;i++)
{
   if (all[i] %2 == 0)
     {
         even[j] = all[i];
         j++;
     }
}
evenSize = j;
```

## - Vector Manipulation

**Defining a vector**

Must include the vector header file:
```
#include <vector>
```

Defining:
```
vector<int> numbers(10);
```
This statement defines numbers as a vector of 10 integers.

You can also initalize all elements in the vector to a value (2 in this case):
```
vector<int> numbers(10, 2);
```

Also you can initialize a vector with the values of another vector:
```
vector<int> set2(set1);
```
set2 will be a copy of set1

You can inialize a vector with a list of values:
```
vector<int> numbers { 10, 20, 30, 40 };
```
storing a value that already exists in an element of a vector, use the array subscript `[]`

```
vector<int> hours(NUM_EMPLOYEES);
cin >> hours[index];
```


Read a file of int values into a vector, skipping odd values and values greater than 100:
```
while (input >> num)
{
if (num % 2 == 0 && num <=100)
   {
     nums.push_back(num);
   }
}
```

`push_back` Puts a value back into a vector
```
values.push_back(32);
```
This adds the value 32.0 to the vector named values.  The vector increases its size by 1.

`pop_back` Removes the last value placed into the vector with push_back
```
values.pop_back();
```


## - Vector Parameters

How can you pass vectors as parameters?

This function computes the sum of a vector of floating point numbers:
```
  double sum(vector<double> values)
  {
     double total = 0;
     for (int i = 0; i < values.size(); i++)
     {
        total = total + values[i];
     }
     return total;
  }
```
This function visits vector elements without changing them, but is copying the entire vector from one place in memory into the function.

Instead use a reference variable to save resources and memory:
```
  double sum(const vector<double> &values)
  {
     double total = 0;
     for (int i = 0; i < values.size(); i++)
     {
        total = total + values[i];
     }
     return total;
  }
```

**Changing vector values**
```
void multiply(vector<double>& values, double factor)
{
  for (int i = 0; i < values.size(); i++)
  {
     values[i] = values[i] * factor;
  }
}
```
Note the vector is being passed as reference to make these changes.

Always pass vectors be reference if you don't want to make changes add `const` in front of the parameter

```
int findIt(const vector <string> & parts,
              string partToFind);
//Can access, but not change the vector!

void sortIt (vector <string> &parts);
//can access and change the vector
```
**Returning a vector from a function**

Simply build the vector in the function and return it:
```
  vector<int> squares(int n)
  {
     vector<int> result;
     for (int i = 0; i < n; i++)
     {
        result.push_back(i * i);
     }
     return result;
  }
```
Function Call:
```
vector <int> aVector;
int limit = 20;
…
aVector = squares(limit);
```

## - Common Algorithms

Vectors do not suffer from the same limitations as array.  For example if you wanted to copy an array to another array you would have to use a loop to iterate through the arrays.

Vectors can be assigned:
```
 vector<int> squares;
  for (int i = 0; i < 5; i++)
  {
       squares.push_back(i * i);
  }

  vector<int> lucky_numbers;
     // Initially empty
  lucky_numbers = squares;|
     // Now lucky_numbers contains
     // the same elements as squares
```

Vectors must hold the same data type to be assigned to each other:
```
vector<int> squares; 
         for (int i = 0; i < 5; i++)
  {
       squares.push_back(i * i);
  }

  vector<int> lucky_numbers;
               // Initially empty

  lucky_numbers = squares;

     // Now lucky_numbers contains
    // the same elements as squares
```
Example using a template:
```
template <class T>
bool get_data(vector <T>& v, string f)
{
  T valueIn;
  bool ok = true;
  ifstream input;
  input.open(f.c str());
  if (input.fail())
  {
    cout << "Unable to open file\n";
    ok = false;
  }
  else
  {
    while (input >> valueIn);
    }
      input.close();
    }
  return ok;
}
```

# Searching

## - Introduction to Sorting and Searching

**Sort**

Arranging a list of values in order, eg. Alphabetical or numerical

**Sorting Algorithms**
- Selection Sort
- Bubble Sort
- Insertion Sort
- Shell Sort
- Quick Sort

**Searching**

THe process of looking for a specific element in a vector; for example, discovering whether a certain score is included in a list of scores.  Searching, like sorting, is a common computer programming task.  There are many algorithms and data structures devoted to searching.  Two commonly used approaches are:
1. Linear Search
2. Binary Search

**Three Ways to Search**
1. Serial **Slowest** but only available method if a vector isn't in order.
2. Seriel search with early exit (Works if a vector is in order)
3. Binary Search (**Fastest** Vecotr or Array must be in order)

**Serial Search**

Serial Search is not very efficient. In the worst case, the target may not be in the list, so we access every element in the vector. On average, the target will be in the middle of the vector, so we search half of the elements in the vector. For example, if we had a 1000 element vector:
- Worst case search through all 1000
- Average search about 500 elements

## - Binary Search

Look at the middle item:
1. If larger than target, set high to middle -1
2. If smaller, set low to middle +1
3. if equal element is found

- Recalculate middle as (high+low)/2
- Repeat steps until found or low>high(not in list)

Maximum number of compares is equal to the first power of two greater than number of cells.

So, if you had to search through 1000 elements $2^10=1024$ you would have to make a maximum of 10 compares to find a name in this list.

This scales exponentially with 1 billion cells requiring a maximum of 30 compares. 

