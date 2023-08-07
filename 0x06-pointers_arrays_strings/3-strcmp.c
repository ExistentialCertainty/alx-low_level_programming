#include <stdio.h>

/**
 * _strcmp -  a function that compares two strings.
 *
 * @s1: first string argument to be compared with second.
 * @s2: second string argument to be compared with first.
 * Return: 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
