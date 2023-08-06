#include <stdio.h>

/**
 * _strncpy -  a function that copies a string.
 *
 * @dest: argument destination string
 * @src: string argument to be copied
 * @n: array size for src
 * Return: result for success
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;
	for ( ; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
