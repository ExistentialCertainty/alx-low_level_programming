#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array
 * of chars, and initializes it with a specific char.
 * @size: argument for size of array
 * @c: argument for content of array
 *
 * Return: ptr for success, Null for fail
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned long int i;

	if (size == 0)
	{
		return ('\0');
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return ('\0');
	}
	if (size > 1)
	{
		i = 0;
		while (i < (sizeof(char) * size))
		{
			ptr[i] = c;
			i++;
		}
	}
	return (ptr);
}
