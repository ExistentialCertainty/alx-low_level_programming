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
	unsigned int j;
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
	i = 0;
	while (s1[i] != '\0')
	{
		buffer[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j] != '\0' && j <= n - 1)
	{
		buffer[i] = s2[j];
		i++;
		j++;
	}
	buffer[i] = '\0';
	return (buffer);
}

