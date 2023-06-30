#include <stdio.h>
#include <stdlib.h>
/**
* main - main block
*
* Description: Write a program that prints the numbers from 1 to 100,
* followed by a new line. But for multiples of three print Fizz
* instead of the number and for the multiples of five print Buzz.
* For numbers which are multiples of both three and five print
* FizzBuzz.
* Return: 0 success
*/
int main(void)
{
	int j = 0;

	for (j = 1; j <= 100; j++)
	{
		if (j % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (j % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (j % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%d ", j);
		}
	}
	printf("\n");
	return (0);
}

