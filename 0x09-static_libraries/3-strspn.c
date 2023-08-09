#include "main.h"

/**
 * _strspn -  a function that gets the length of a prefix substring.
 * @s: initial string argument to be checked against.
 * @accept: prefix substring argument checked against s.
 *
 * Return: lenght in bytes (count) of accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count;
	char *a;

	count = 0;
	while (*s != '\0' && *s != '\n')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		s++;
	}
	return (count);
}
