#include "main.h"

/**
 * _strchr - a function that locates a character in a string.
 * @s: string argument to be compared against
 * @c: character argument to be compared to s
 *
 * Return: pointer (s) to the first occurrence of c in s;
 * NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}
	return ('\0');
}
