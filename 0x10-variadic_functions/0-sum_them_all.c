#include <stdio.h>
#include <stdarg.h>
/**
 * sum_them_all - a function that returns the sum of all its parameters.
 * @n: number of variadic arguments
 *
 * Return: sum (Always)
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int sum;
	va_list sum_lst;

	if (n == 0)
	{
		return (0);
	}
	sum = 0;
	va_start(sum_lst, n);
	for (i = 0; i < n; i++)
		sum += va_arg(sum_lst, int);
	va_end(sum_lst);
	return (sum);
}
