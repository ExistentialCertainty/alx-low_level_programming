#include <stdio.h>
/**
 *main - entry point.
 *Description: prints lower case letters
 *except e and q
 *Return: 0 for success.
 */

int main(void)
{
	char alpha = 'a';

	for (alpha = 'a'; alpha <= 'z'; ++alpha)
	{
		if (alpha != 'q' && alpha != 'e')
		{
			putchar(alpha);
		}
	}
	putchar('\n');
	return (0);
}
