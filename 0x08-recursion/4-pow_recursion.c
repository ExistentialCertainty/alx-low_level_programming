#include <stdio.h>

/**
*_pow_recursion - a recursive function that takes two integer
* arguments and raises the first one to the power of the other.
*
*@x: first argument entered.
*@y: second argument entered (power).
*Return: 1 if y is 0
*/

int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y == 1)
	{
		return (x);
	}
	else if (y > 1)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
