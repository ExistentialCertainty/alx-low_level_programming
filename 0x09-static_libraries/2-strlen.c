#include "main.h"

/**
*_strlen -  a function that returns
*the length of a string.
*
*@s: pointer to string whose
*length is to be determined
*Return: count value
*/
int _strlen(char *s)
{
	int count;
	int i;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		count++;
		i++;
	}
	return (count);
}
