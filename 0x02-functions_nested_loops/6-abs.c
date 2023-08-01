#include <stdio.h>

/**
* abs - prototype
* @j: int to be checked.
* Description: checks each inputed arguments
* and prints the absolute value
* Return: 0 success
*/

int abs(int n)
{
	if (n >= 0)
	{
		putchar('0' + n);
	}
	else
	{
		putchar('0' + (-n));
	}

	return (0);
}
