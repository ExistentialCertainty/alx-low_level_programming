#include <stdio.h>

/**
* print_alphabet - function
* Description: prints the lower case letters
*/

void print_alphabet(void)
{
	char alpha = 'a';

	do {putchar(alpha);
		alpha++;
	} while (alpha <= 'z');
	putchar('\n');
}
