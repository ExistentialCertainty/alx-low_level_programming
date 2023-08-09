#include "main.h"

/**
 * _memcpy -  a function that copies memory area.
 * @dest: destination buffer argument
 * @src: source  buffer argument
 * @n: size of byte to be copied
 *
 * Return: a pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_ptr;
	char *src_ptr;

	dest_ptr = dest;
	src_ptr = src;
	while (n > 0)
	{
		*dest_ptr = *src_ptr;
		dest_ptr++;
		src_ptr++;
		n--;
	}
	return (dest);
}
