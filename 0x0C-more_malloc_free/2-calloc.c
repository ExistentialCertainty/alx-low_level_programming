#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * _calloc - a function that allocates memory to an array
 * using malloc. The memory is then set to zero.
 * @nmemb:argument for number of member of elements.
 * @size: argument for size of byte of type of elements.
 * Return: null if nmemb is zero, size is zero or malloc
 * fails. otherwise, the memory buffer is returned.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *buffer;
	unsigned int i;
	char *buff;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	buffer = malloc(nmemb * size);
	if (buffer == NULL)
	{
		return (NULL);
	}
	buff = (char *)buffer;
	for (i = 0; i < nmemb * size; i++)
	{
		buff[i] = 0;
	}
	return (buffer);
}

