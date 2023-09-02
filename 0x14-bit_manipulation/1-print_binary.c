#include "main.h"
/**
 * print_binary -  a function that prints
 * the binary representation of a number.
 * @n: integer argument to be converted.
 */
void print_binary(unsigned long int n)
{
	int bit_size, i, leading_zeroes;

	if (n == 0)
	{
		putchar('0');
		return;
	}
	bit_size = sizeof(n) * 8;
	leading_zeroes = 1;
	for (i = bit_size - 1; i >= 0; i--)
	{
		if ((n >> i) & 1)
		{
			leading_zeroes = 0;
			putchar('1');
		}
		else if (!leading_zeroes)
		{
			putchar('0');
		}
	}
}
