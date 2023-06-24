#include <stdio.h>
/**
 *main - entry point.
 *Description: prints lower case letters
 *in reverse
 *Return: 0 for success.
 */

int main(void)
{
	char alpha = 'z';

	for (alpha = 'z'; alpha >= 'a'; --alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
