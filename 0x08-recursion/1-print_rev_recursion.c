#include <stdio.h>

/**
*_print_rev_recursion - a function that prints recursively,
* in reverse, strings passed to it as an argument
*
*@s: pointer to the string argument passed
*/

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		s++;
		_print_rev_recursion(s);
	}
	putchar(*s);
}
