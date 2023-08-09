#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: pointer to first string argument
 * @s2: pointer to second string argument
 *
 * Return: ptr on success; Null on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned long int count1;
	unsigned long int count2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	count1 = count2 = 0;
	while (s1[count1] != '\0')
	{
		count1++;
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s2[count2] != '\0')
	{
		count2++;
	}
	ptr = malloc(sizeof(char) * (count1 + count2 + 1));
	if (ptr == NULL)
	{
		return ('\0');
	}
	count1 = count2 = 0;
	while (s1[count1] != '\0')
	{
		ptr[count1] = s1[count1];
		count1++;
	}
	while (s2[count2] != '\0')
	{
		ptr[count1] = s2[count2];
		count1++;
		count2++;
	}
	ptr[count1] = '\0';
	return (ptr);
}
