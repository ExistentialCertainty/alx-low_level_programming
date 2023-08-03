#include <stdio.h>

/**
*factorial - a recursive function that returns the
* factorial of any integer passed into it.
*
*@n: integer argument passed into the funtiom
*Return: 1 when integer is 0 and -1 when integer
* is less than 0
*/

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	putchar('0' + n);
}
