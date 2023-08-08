#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a parameter.
 * @str: pointer to string argument
 *
 * Return: ptr (success); Null (failure)
 */
char *_strdup(char *str)
{
	char *ptr;
	int count;
	unsigned long int i;

	if (str == NULL)
	{
		return ('\0');
	}
	count = 1;
	while (str[count] != '\0')
	{
		count++;
	}
	ptr = malloc(sizeof(char) * count);
	if (ptr == NULL)
	{
		return ('\0');
	}
	i = 0;
	while (i < (sizeof(char) * count))
	{
		ptr[i] = str[i];
		i++;
	}
	return (ptr);
}
