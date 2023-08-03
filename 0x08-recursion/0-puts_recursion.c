#include <stdio.h>

/**
*_puts_recursion - recursive function that
* prints string up till the null symbol
*
* @s: pointer to the string to be printed
*/

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		putchar('\n');
		return;
	}
	putchar(*s);
	s++;
	_puts_recursion(s);
}
