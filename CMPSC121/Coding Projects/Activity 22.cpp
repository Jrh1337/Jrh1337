//Activity 22
//Purpose: This program fills an array with 50 random integers then displays each integer 10 rows at a time.
#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

const int SIZE = 50;

int main()
{
	unsigned seed = time(0);
	srand(seed);
	int numbers[SIZE];

	for (int i = 0; i < SIZE; i++)
	{
		numbers[i] = rand() % 10000;
	}

	for (int i = 1; i <= SIZE; i++)
	{
		cout << numbers[i - 1] << " ";
		if (i % 10 == 0)
		{
			cout << endl;
		}
	}

	return 0;
}

/*
4511 644 3036 410 6397 1551 812 106 8102 2797
1603 9453 9133 1287 2041 6579 8068 8343 2924 4288
8350 3648 295 3696 362 988 6712 8987 8973 134
4402 8650 6206 809 432 2537 4200 7896 3275 557
3004 9824 3661 375 1973 3115 5431 9577 5728 9510
*/
