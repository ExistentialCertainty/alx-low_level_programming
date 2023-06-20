#include <stdio.h>
/**
* main - Entry point
* Description: prints the lower case letters
* first followed by upper case letters.
* Return: Always 0 (Success)
*/

int main(void)
{
	char alpha = 'a';
	char ALPHA = 'A';

	do {putchar(alpha);
	alpha++;
	} while (alpha <= 'z');
	do {putchar(ALPHA);
	ALPHA++;
	} while (ALPHA <= 'Z');
	putchar('\n');
	return (0);
}
