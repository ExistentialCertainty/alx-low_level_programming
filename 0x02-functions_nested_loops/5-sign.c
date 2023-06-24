#include <stdio.h>

/**
* print_sign - prints the sign of a number.
* @n: int to be checked.
* Description: checks each inputed arguments
* Return: +1 for positive values;
* returns 0 for 0 value;
* returns -1 for negative values.
*/

int print_sign(int n)
{
	if (n > 0)
	{
		putchar('+');
		return (1);
	}
	if (n == 0)
	{
		putchar('0');
		return (0);
	}
	if (n < 0)
	{
		putchar('-');
	}
	return (-1);
}
