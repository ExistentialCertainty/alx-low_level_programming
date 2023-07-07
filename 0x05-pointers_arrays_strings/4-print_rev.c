#include <stdio.h>

/**
*print_rev - a function that prints a
*string in reverse, followed by a new line
*
*@str: pointer to string to be
*printed in reverse
* Return: None
*/
void print_rev(char *str)
{
	int i;
	int count;

	count = 0;
	while (str[count] != '\0')
	{
		count++;
	}
	for (i = count - 1; i >= 0; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
