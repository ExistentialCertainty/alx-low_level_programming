#include <stdio.h>

/**
* _sqrt_helper - a helper function that guesses the square
* root before passing it to the primary function.
*
* @n: argument for which the square root is to be found
* @min: holds value 0 for the purpose of guessing
* @max: holds value n for the purpose of guessing
*
* Return: -1 for numbers with no square root
*/

int _sqrt_helper(int n, int min, int max)
{
	int mid;
	unsigned int square;

	if (min > max)
	{
		return (-1);
	}
	mid = min + (max - min) / 2;
	square = mid * mid;
	if (square == n)
	{
		return (mid);
	}
	else if (square < n)
	{
		return (_sqrt_helper(n, mid + 1, max));
	}
	else
	{
		return (_sqrt_helper(n, min, mid - 1));
	}
}

/**
 *_sqrt_recursion - function that finds the square root of
 *an argument passed to it.
 *
 * @n: argument for which square root is to be found
 * Return: -1 when n is less that 0.
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0, n));
}
