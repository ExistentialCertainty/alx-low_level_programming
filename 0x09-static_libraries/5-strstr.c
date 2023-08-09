#include "main.h"

/**
 * _strstr - a function finds the first occurrence of the
 * substring needle in the string haystack. The terminating
 * null bytes (\0) are not compared
 * @haystack: first string argument
 * @needle: second string argument
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	if (*needle == '\0')
	{
		return (haystack);
	}
	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *h == *n)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
