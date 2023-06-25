#include <stdio.h>

/**
 * main - Entry point
 * Description: Prints all two digits combination
 * without repitition where 01 and 10 is
 * considered repitition.
 * Return: 0 success.
 */

int main(void)
{
	int num1;
	int num2;

	for (num1 = '0'; num1 <= '8'; num1++)
	{
		for (num2 = num1 + 1; num2 <= '9'; num2++)
		{
			putchar(num1);
			putchar(num2);
			if ((num1 >= '8') && (num2 >= '9'))
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
