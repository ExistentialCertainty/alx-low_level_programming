#include <stdio.h>
/**
* print_line - code block
* @n: argument
* Description: prints _, n number of times when n is
* greater than 0. Else, print new line.
* Return: 0 success
*/
void print_line(int n)
{
	int i;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
	{
		putchar(95);
	}
		putchar('\n');
	}
	else
	{
		putchar('\n');
	}
}
