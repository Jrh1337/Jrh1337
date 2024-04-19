# ---------TABLE OF CONTENTS----------
-Hyperlinks take you to .cpp with solution I came up with.

## [Activities](./Project%20Navigation.md#activity-2)
- Designed as homework assignments to build proficiency.
## [Labs](./Project%20Navigation.md#lab-2)
- More difficult
## [Projects](./Project%20Navigation.md#big-projects)
- Most difficult, culminative of topics previously learned

-----------------------------------------------------------------------------------------------
-----------------------------------------------------------------------------------------------
# Activities

## [Activity 2](./Coding%20Projects/Activity%202.cpp)
- Write an algorithm to read in three numbers from the user. Then, add the first two  numbers and divide the result by the third one.

## [Activity 3](./Coding%20Projects/Activity%203.cpp)
- Write a program that will ask the user to enter 5 integers, read them in and display their average. Average should be a double. A typical run might look similar to the following:

Enter 5 integers: 3 8 9 6 7  The average is 6.6

## [Activity 4](./Coding%20Projects/Activity%204.cpp)
- Write a program which reads in five temperature values in Fahrenheit and displays them in Celsius. Organize your results in a table, similar to the one shown below. Make sure to set the appropriate precision and try to match the table alignment shown in the output sample. You can find the appropriate formula on the web.  Hint: Integer division does NOT give accurate answers!

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/46ab9a87-652f-4958-b681-39761575e365)

## [Activity 5](./Coding%20Projects/Activity%205.cpp)
- Modify the problem so that the program asks for the number of shares purchased, the purchase price, the commission percent, and the sell price. You can assume that he sold all the shares and that the buy and sell commissions are the same.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/767565d1-88f4-4e6b-b1f3-656a0bddbb01)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/4dd5c354-6809-4373-ae62-34ef01945453)

## [Activity 6](./Coding%20Projects/Activity%206.cpp)

A “magic date” is a date where the month times the day equals the two-digit year (when written mm/dd/yy - e.g., 2/8/16). Write a program to ask the user to input a month, day and year. Then display whether it is a magic date or not.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/49f85c49-6781-47eb-9822-a0809f2287f5)


## [Activity 7](./Coding%20Projects/Activity%207.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/b0cc66e2-b8d8-4b49-96b8-b23e8ea18c78)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/992b0caf-45f7-4a54-9165-6fe36a5ad362)


## [Activity 8](./Coding%20Projects/Activity%208.cpp)

Write a program to ask for a Cartesian coordinate x,y. Your program should read in an x value and a y value and then inform the user whether it is the origin (0,0), on the y axis, eg (0, 10), on the x axis, eg (-3,0) or in which quadrant it appears.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/82c27a93-03e3-4354-b8eb-f774aea97984)

## [Activity 9](./Coding%20Projects/Activity%209.cpp)

Write a program which asks the user to enter an integer.  Your program should then display the sum of the even digits of the integer.  A typical run would be:
```
Enter an integer greater than 10000:  34
34 is not greater than 10000
Enter an integer greater than 10000:  39428
The sum of the even digits of 39248 is: 14
```

Hints:

1. Use a loop to ensure that the number entered is > 10000.
2. You don’t need to be concerned with the length of the integer, use a while loop which ends when the number is equal to zero.
3. You will need to preserve the original value entered, so after the user enters it, copy it to another int variable.
4. You can access the last digit of an integer by dividing modulo by 10, eg digit = workingNumber % 10;
5. You can remove the last digit of an integer by dividing by 10, eg workingNumber /= 10;

## [Activity 10](./Coding%20Projects/Activity%2010.cpp)

Write a program which asks the user to enter a number which represents a weekday (e.g., 1 for Sunday, 2 for Monday, etc.). Do not accept a number that is out of range. Then display the name of that day. Encase your logic in an outer loop which asks the user if he or she wants to enter another number. An entry of Y will continue asking for days, anything else should end the program. A typical run would be:
![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/dc7b58bd-e92b-4a94-981e-acb571ba66e1)



## [Activity 11](./Coding%20Projects/Activity%2011.cpp)

Write a program to read the parts.txt file and display the cost of inventory for each of the part classes.  The file contains parts of class A, B, C and D. A typical line in the file would be:

P-11191 A 10 34.29

This is part number P-11191, a class A part, of which there are 10 in stock and each costs $34.29.  Your program, therefore, would add 342.90 to class A inventory.

The parts file is on Canvas in this week’s module in .zip format. After downloading it, right click and choose Extract.

```
...................... INVENTORY REPORT .....................
A parts   Count:  85    Value of inventory:   191180.07
B parts   Count:  69    Value of inventory:    74764.16
C parts   Count:  77    Value of inventory:    50322.30
D parts   Count:  60    Value of inventory:    22416.49
Unknown   Count:  13    Value of inventory:     4282.68
Press any key to continue . . .
```

## [Activity 12](./Coding%20Projects/Activity%2012.cpp)

Write a program with a loop to ask the user for an integer greater than or equal to 2 and then pass the integer to a function which will produce and display on the console the ulam sequence1. Do not accept a number less than 2.

1The ulam sequence begins with an integer. If it is even, divide by 2. If it is odd, multiply by 3 and add 1. Then apply the appropriate rule to the resulting integer. Continue in this way until the number produced is 1. This sequence will always, eventually produce a value of 1.

A typical program run might be similar to the screen shot below:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/7f9079cb-c943-47e2-ad7e-557c37d02f81)


## [Activity 13](./Coding%20Projects/Activity%2013.cpp)

A coin is tossed repeatedly, and a payoff of 2n dollars is made, where n is the number of the toss on which the first Head appears. So TTH pays $8, TH pays $4 and H pays $2. Write a program to simulate playing the game 10 times. Display the result of the tosses and the payoff. At the end, display the average payoff for the games played. A typical run would be:

```
TTTH       You win $16.00
TH            You win $4.00
TH            You win $4.00
H               You win $2.00
TTTTH      You win $32.00
TH             You win $4.00
H               You win $2.00
H               You win $2.00
TH             You win $4.00
TH             You win $4.00

The average payout was $7.40
```

## [Activity 15](./Coding%20Projects/Activity%2015.cpp)

Write a program to ask the user to input the number of items sold and the cost of one item and then use a function to calculate the value of a purchase. The call to the function in main should pass the number of items purchased and the cost of an item. The function should return the value of the purchase. main should then display the value.

```
The call in main would be: value = calculateValue(items, cost);
A typical run would be:
Enter number of items and cost: 5 2.50
The extended amount is $12.50
Do you have another purchase to enter? Y or N
N
Thank you!
```

## [Activity 16](./Coding%20Projects/Activity%2016.cpp)

Write a program with function which uses a static variable to keep track of the current balance of a bank account. Do not allow an overdraft! A typical run would be:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/083475ac-41ab-4695-9efa-2b25e502cbec)

## [Activity 17](./Coding%20Projects/Activity%2017.cpp)

Write a program with a function which will ask for the length, width and height of a room and then pass that data to another function which will calculate and display the length of the longest pole which will fit in that room. That pole would run diagonally across the room from an upper corner to a lower
These will both be void functions. The first one will use reference parameters.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/de638306-c52c-4e3a-aa9f-9fb1ca6c8f10)


## [Activity 18](./Coding%20Projects/Activity%2018.cpp)

Write a program which asks you to enter a name in the form of first middle initial last. So you might enter for example samuel p. clemens. Use getline to read in the string because it contains spaces. Also, apparently the shift key on your keyboard doesn’t work, because you enter it all lower case. Pass the string to a function which uses .find to locate the letters which need to be upper case and use toupper to convert those characters to uppercase. The revised string should then be returned to main in the form Last, First MI where it will be displayed.

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/0856dbfb-90c9-4a7b-b08b-1e8916e2b282)


## [Activity 19](./Coding%20Projects/Activity%2019.cpp)

The area of a triangle can be calculated given its base and height, or given the lengths of its sides.  You can find the formulas for each of these methods on the web.  Write a program with two overloaded functions both named triangleArea.  In main, randomly ask the user to enter either base and height or the lengths of the three sides and then make the appropriate call to triangleArea. triangleArea should return the area to main where it will be displayed. The program should contain an outer loop which asks if the user wishes to continue. A typical run would be:

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/4c988f2e-c1c4-47b6-b674-b3ea6bcbc6e4)


## [Activity 20](./Coding%20Projects/Activity%2020.cpp)

Write a program which asks the user to enter a string and then passes it to a void recursive function which displays the string in reverse. The prototype of the function would be:

```
void reverse(string s, int i);
```

The function call would be:

```
reverse(strIn, strIn.length());
```

A typical run will be:
```
Enter a string:

Four score and seven years ago ..

.. oga sraey neves dna erocs ruoF
```

## [Activity 21](./Coding%20Projects/Activity%2021.cpp)

Write a program to ask for Part number, part name, part class, number in stock and unit price.  The data should be read into a struct and passed to a function which writes it out to a data file.  Part number and name will be strings, part class is a character, number in stock is an integer and unit price is  a double.  Enclose your program in a do while which asks the user if he/she wants to enter more parts.  Typical run:

Enter part information (part number, name, class, on hand balance and price):

```
P-14376 Widget B 120 34.95
More parts? Y or N
y
P-16543 Wodget C 80 15.75
More parts? Y or N
n
```
Part name will be a string without spaces.

## [Activity 22](./Coding%20Projects/Activity%2022.cpp)

Write a C++ program which declares an array which can hold 50 int values.  Use a const to establish the size of
the array.  Use a loop to fill the array with 50 random numbers.  Then display the values 10 per line, like:

```
32734  11377  29730  25790  27662  31264   5530   7441  14377  21719
28059  27864   4276   1495  29687  12784  19497  31106  21525  22643
```

## [Activity 23](./Coding%20Projects/Activity%2023.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/b8bc3d02-7ba8-4ccf-afa3-571e485f58bc)


## [Activity 24](./Coding%20Projects/Activity%2024.cpp)
Write a program using parallel vectors and a function which fills each of them with 500 random numbers between 1 and 100. The program should then pass both vectors to a function which will return an integer indicating a count of how many times both vectors had even numbers in the same location. So if vector01[0] contained 4 and vector02[0] contained 12, you would add one to count. If vector01[1] contained 3 and vector02[1] contained 4, you would not add one to count.

main would display something like:

The Vectors contain 128 cells where both values are even.

Note: create a much smaller vector (20 numbers perhaps) to test your program on. This way you can test your program correctness much easier.

## [Activity 25](./Coding%20Projects/Activity%2025.cpp)
Write a program to fill a vector with 5000 random numbers. Then display:

- The smallest number
- The largest number
- The number of odd values
- The number of even values
- The total of the values
- The average of the values
- Ask the user for an integer and display the subscript of the cell where it was found or NOT FOUND! if it isn’t found. Use a binary search to do this.

There is a file called "Activity 25 Sort functions.zip" under Materials in this week’s module. Download and unzip the shellSort and swapper function Download Download and unzip the shellSort and swapper function. Since you will be using a binary search, the vector will have to be in order. We will discuss sorting more in the next module, but you can use the provided code to perform the sort.

Each of the preceding values should be determined by a function and returned to main where they should be displayed.

# Labs

## [Lab 2](./Coding%20Projects/Lab%202.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/9f7a1833-9700-4f73-ac5b-055db13227de)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/7456a521-6d8c-4066-8c2b-52bc1af00d7a)

## [Lab 3 Part 1](./Coding%20Projects/Lab%203_1.cpp)
## [Lab 3 Part 2](./Coding%20Projects/Lab%203_2.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/636353b8-c22e-4dd8-9a14-6c1df8fc1f3b)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/6f3c3de9-050a-4668-b83d-ed251574b7fd)

## [Lab 4](./Coding%20Projects/Lab%204.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/faa10776-a6dc-4cb1-8f97-7be69957f48c)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/a475f5f4-e72c-4c0c-9b12-517472f62996)


## [Lab 5](./Coding%20Projects/Lab%205.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/7f78f584-4544-480a-88b6-bff8751e5356)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/b824daf7-94c5-402c-93fc-a25da8fb8068)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/d43a2cf9-62c6-4ff8-8905-f119ef7b6c8b)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/8c18d46c-53c1-4703-93e6-6e7b6553c7d2)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/0ebb1a47-e823-4fdf-a257-0a41144dd791)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/1cfb3869-d027-48e6-9442-ffd5e71c9984)


## [Lab 6](./Coding%20Projects/Lab%206.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/5a12817f-2595-43f8-b043-c040fdb429bc)

## [Lab 7](./Coding%20Projects/Lab%207.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/838d4506-2577-4ee5-8a9c-79221ebb2994)

## [Lab 8](./Coding%20Projects/Lab%208.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/60bbec16-5e27-402d-ac08-98edbaaaf80a)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/ba55adf8-7dc6-44ea-a28c-16431d839013)


## [Lab 9](./Coding%20Projects/Lab%209.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/55185063-c164-48f6-9489-13f10f58cc0e)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/6831de4b-d94f-469e-9f7b-ce73cf7ff136)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/6c1dc34f-57cb-48c3-9b87-2de51d3020fb)

## [Lab 10](./Coding%20Projects/Lab%2010.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/5751d45b-a6ca-457f-8305-7b12f2e9b858)


## [Lab 11](./Coding%20Projects/Lab%2011.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/9071bdb1-4a52-43af-bea8-32fb00ab606d)


## [Lab 12](./Coding%20Projects/Lab%2012.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/822f254f-b099-4342-8a71-e7c3729bbd99)



## [Lab 13](./Coding%20Projects/Lab%2013.cpp)
![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/25b1f608-a5b5-4c28-90aa-188b4474916b)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/0d1c24ee-9a4c-47c8-8c85-b16bb7527f76)

## [Lab 14](./Coding%20Projects/Lab%2014.cpp)
![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/ff92ad05-fb8e-4e6c-8e8a-349e2d5025f2)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/6c290f1c-5dc5-4025-b6ab-7d60a638001c)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/0d62e89e-8440-42cb-b96e-12435cd6859f)



# Big Projects

## [Project 1](./Coding%20Projects/Project%201.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/d2c17de3-3f41-4e40-a384-e07f2e515e25)


## [Project 2](./Coding%20Projects/Project%202.cpp)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/8204ac25-4641-466e-87bd-805b91f6bb46)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/5e6538a0-663e-4f9b-8f85-ee53c39de231)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/0ae5265b-0e8d-4a6c-895f-732a8c0c2f1b)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/aa39a903-d4bf-4805-917c-1d7bf6afd8fa)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/cbc83f16-ec18-48f3-8e7a-c7425c612ddc)

## [Project 3]

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/73e030c7-d2c2-4f48-97c2-61a8d4df20e9)

![image](https://github.com/Jrh1337/Jrh1337/assets/166570231/ac14b73a-0a8d-4667-bbdc-68853f7aa9a3)


