#include <stdio.h>

/**
*_puts -   a function that prints
*a string, followed by a new line
*
*@str: pointer to string to be
*printed
* Return: None
*/
void _puts(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		putchar(str[i]);
		i++;
	}
	putchar('\n');
}
