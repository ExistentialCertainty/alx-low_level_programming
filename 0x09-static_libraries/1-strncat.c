#include <stdio.h>

/**
 * _strncat - function appends the src
 * string to the dest string, overwriting
 * the null byte (\0) at the end of dest.
 * It will use at most n bytes from src; and
 * src does not need to be null-terminated
 * if it contains n or more bytes.
 *
 * @dest: argument destination string
 * @src: string argument to be concantenated
 * @n: amount of bytes from src
 * Return: result for success
 */
char *_strncat(char *dest, char *src, int n)
{
	char *result;

	result = dest;
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0' && n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (result);
}
