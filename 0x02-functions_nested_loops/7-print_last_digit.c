#include <stdio.h>
#include <stdlib.h>

/**
* print_last_digit - prototype
* @j: value to be checked
* Description: checks the inputed value
* and prints the last digit.
* Return: y success
*/

int print_last_digit(int j)
{
	j = abs(j) % 10;

	putchar(j + '0');
	return (j);
}
