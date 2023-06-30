#include <stdio.h>
/**
* print_diagonal - code block
* @n: argument
* Description: prints \, n number of times when n is
* greater than 0. Else, print new line.
* Return: 0 success
*/
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j <= i; j++)
			{
				if (i == j)
				{
					putchar(92);
				}
				else
				{
					putchar(32);
				}
			}
			putchar('\n');
		}
	}
}
