#include <stdio.h>

/**
 * _strpbrk - a function that searches a string for
 * any of a set of bytes.
 * @s: first string argument to be checked against.
 * @accept: second string arguent to be checked for.
 *
 * Return: s if it matches and NULL if none doesn't.
 */
char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return ('\0');
}
