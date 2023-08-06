#include <stdio.h>

/**
 * _strcmp -  a function that compares two strings.
 *
 * s1: first string argument to be compared with second.
 * s2: second string argument to be compared with first.
 * Return: -15 if s1 > s2; 15 if s2 > s1; 0 if s1 = s2.
 */
int _strcmp(char *s1, char *s2)
{
	int i, j;

	i = 0;
	j = 0;
	while (s1[i] != '\0')
	{
		i++;
	}
	while (s2[j] != '\0')
	{
		j++;
	}
	if (i < j)
	{
		return (-15);
	}
	else if (i > j)
	{
		return (15);
	}
	else
	{
		return(0);
	}
}
