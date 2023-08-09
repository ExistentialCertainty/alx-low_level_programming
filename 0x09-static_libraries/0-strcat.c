#include <stdio.h>

/**
 * _strcat - function appends the src
 * string to the dest string, overwriting
 * the terminating null byte (\0) at the
 * end of dest, and then adds a terminating
 * null byte
 *
 * @dest: argument destination string
 * @src: string argument to be concantenated
 * Return: result for success
 */
char *_strcat(char *dest, char *src)
{
	char *result;

	result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (result);
}
