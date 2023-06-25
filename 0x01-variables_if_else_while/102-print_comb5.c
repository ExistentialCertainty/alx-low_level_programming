#include <stdio.h>

/**
* main - Entry point
* Description: Prints all possible combination of three
* digit numbers in ascending order without repitition
* where 012, 021, 102 and 120, 201 and 210 are
* considered repititions.
* Return: 0 success
*/

int main(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 98; num1++)
	{
		for (num2 = num1 + 1; num2 <= 99; num2++)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num1 % 10);
			putchar(' ');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			if ((num1 >= 98) && (num2 >= 99))
			{
				break;
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
