#include <stdio.h>

/**
*_strlen_recursion - a function that counts the number of
* characters in a string array and returns the number
*
*@s: pointer to the string argument to be counted.
*Return: 0 when s is null.
*/
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
