#include <stdio.h>
#include <stdlib.h>

/**
* print_last_digit - prototype
* @j: value to be checked
* Description: checks the inputed value
* and prints the last digit.
* Return: 0 success
*/

int print_last_digit(int j)
{
	int k;

	if (j >= 0)
	{
		k = j % 10;
		putchar('0' + k);
	}
	else
	{
		k = -j % 10;
		putchar('0' + k);
	}
	return (k);
}
