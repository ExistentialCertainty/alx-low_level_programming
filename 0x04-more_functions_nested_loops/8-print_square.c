#include <stdio.h>
/**
* print_square - code block
* @size: argument
* Description: prints #, n number of times vertically and horizontally
* when n is greater than 0. Else, print new line.
* Return: 0 success
*/
void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				putchar(35);
			}
			putchar('\n');
		}
	}
}
