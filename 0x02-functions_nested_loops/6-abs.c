#include <stdio.h>

/**
* abs - prototype
* @j: int to be checked.
* Description: checks each inputed arguments
* and prints the absolute value
* Return: 0 success
*/

int abs(int j)
{
	if (j >= 0)
	{
		putchar('0' + j);
	}
	else
	{
		putchar('0' + (-j));
	}

	return (0);
}
