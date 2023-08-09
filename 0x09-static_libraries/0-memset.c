#include "main.h"

/**
 * _memset - a function fills the first n bytes
 * of the memory area pointed to by s with the
 * constant byte b
 * @s: string argument
 * @b: byte argument
 * @n: byte size argument
 *
 * Return: pointer (ptr) to memory s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr;

	ptr = s;
	while (n > 0)
	{
		*ptr = b;
		ptr++;
		n--;
	}
	return (s);
}
