#include <stdio.h>

/**
* main - Entry point
* Description: prints the lower case letters
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha = 'a';

	do {putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');
	return (0);
}
