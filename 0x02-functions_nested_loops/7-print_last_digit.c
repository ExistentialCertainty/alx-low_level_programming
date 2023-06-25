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
	if (j >= 0)
	{
		putchar('0' + j % 10);
	}else
	{
		putchar('0' + -j % 10);
	}
	return (0);
}
