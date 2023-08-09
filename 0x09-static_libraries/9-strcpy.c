#include "main.h"

/**
* _strcpy -  a function that copies the string
* pointed to by src, including the terminating
* null byte (\0), to the buffer pointed to by dest.
* @dest: pointer to string argument.
* @src: pointer to pointer of string argument.
* Return: dest
*/

char *_strcpy(char *dest, char *src)
{
	char *dest_ptr = dest;

	while (*src != '\0')
	{
		*dest_ptr = *src;
		dest_ptr++;
		src++;
	}
	*dest_ptr = '\0';
	return (dest);
}
