#include <stdio.h>

/**
 * is_prime_number_helper - a helper function that
 * recursively tests the modulus of an integer
 * against a divisor.
 *
 * @n: integer to be checked if it is prime
 * @divisor: argument that recursively checks
 * the integer
 * Return: 0 for non-prime integers
 * and 1 for prime integers.
 */
int is_prime_number_helper(int n, int divisor)
{
	if (n <= 1)
	{
		return (0);
	}
	if (divisor == 1)
	{
		return (1);
	}
	if (n % divisor == 0)
	{
		return (0);
	}
	return (is_prime_number_helper(n, divisor - 1));
}

/**
 * is_prime_number - a function that
 * checks if an integer is prime or not.
 *
 * @n: integer to be checked.
 * Return: the boolean value from the
 * helper function. 0 if the it is not
 * prime, 1 if it is prime.
 */
int is_prime_number(int n)
{
	return (is_prime_number_helper(n, n / 2));
}
