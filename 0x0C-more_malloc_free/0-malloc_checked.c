#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - a function that allocates memory using malloc;
 * if malloc fails, the size of array function should cause normal
 * process termination with a status value of 98.
 * @b: size of array
 * Return: pointer to malloc
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
