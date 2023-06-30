#include <stdio.h>

/**
* print_most_numbers - code block
* Description: prints all digits from 0-9
* except 2 and 4
*/
void print_most_numbers(void)
{
	int i;

	for (i = 0;  i < 10; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar('0' + i);
		}
	}
	putchar('\n');
}
