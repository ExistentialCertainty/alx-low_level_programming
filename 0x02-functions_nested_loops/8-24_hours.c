#include <stdio.h>

/**
 * jack_bauer - prototype
 * Description: prints every minute of jack bauer's
 * 24 hours a day.
 * Return: 0 success
 */

void jack_bauer(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 <= 23; num1++)
	{
		for (num2 = 0; num2 <= 59; num2++)
		{
			putchar('0' + num1 / 10);
			putchar('0' + num1 % 10);
			putchar(':');
			putchar('0' + num2 / 10);
			putchar('0' + num2 % 10);
			putchar('\n');
		}
	}
}
