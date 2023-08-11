#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - a function that concatenates two strings
 * @s1: first string argument
 * @s2: second string argument
 * @n: size of bytes to be copies from s2
 * Return: Null on failure; concatenated string on success
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *buffer;
	unsigned int i;
	unsigned int ls1;
	unsigned int ls2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	ls1 = strlen(s1);
	ls2 = strlen(s2);
	if (n >= ls2)
	{
		n = ls2;
	}
	buffer = malloc(ls1 + n + 1);
	if (buffer == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ls1; i++)
	{
		buffer[i] = s1[i];
	}
	for (i = 0; i < n; i++)
	{
		buffer[ls1 + i] = s2[i];
	}
	buffer[ls1 + n] = '\0';
	return (buffer);
}

