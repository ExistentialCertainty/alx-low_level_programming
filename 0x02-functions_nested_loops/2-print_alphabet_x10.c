#include <stdio.h>

/**
* print_alphabet_x10 - function
* Description: prints the lower case letters
* ten times and then a new line.
*/

void print_alphabet_x10(void)
{
	int rpt = 0;
	char alpha;

	do {alpha = 'a';
		do {putchar(alpha);
			alpha++;
		} while (alpha <= 'z');
		rpt++;
		putchar('\n');
	} while (rpt < 10);
}
