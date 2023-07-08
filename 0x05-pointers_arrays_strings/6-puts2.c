#include <stdio.h>

/**
*puts2 - a function that prints every other
*character of a string, starting with the
*first character, followed by a new line.
*
*@str: pointer to string
* Return: None
*/
void puts2(char *str)
{
	int i;
	int length;

	length = 0;
	while (str[length] != '\0')
	{
		length++;
	}
	
	for (i = 0; i < length; i += 2)
	{
		putchar(str[i]);
	}
	putchar('\n');
}
