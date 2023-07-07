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

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		count++;
		i++;
	}
	for (i = count - 1; str[i] >= 0; i--)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
