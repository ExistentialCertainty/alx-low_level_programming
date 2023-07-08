#include <stdio.h>

/**
*puts_half - a function that prints half
*of a string, followed by a new line.
*
*@str: pointer to string
* Return: None
*/
void puts_half(char *str)
{
	int length;
	int i;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	for (i = length / 2; i <= length - 1; i++)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
