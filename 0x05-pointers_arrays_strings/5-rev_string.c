#include <stdio.h>

/**
*rev_string - a function reverses a string
*
*@s: pointer to string to be reversed
* Return: None
*/
void rev_string(char *s)
{
	int i;
	int j;
	char t;
	int length;

	length = 0;
	while (s[length] != '\0')
	{
		length++;
	}
	for (i = 0, j = length - 1; i < j; i++, j--)
	{
		t = s[i];
		s[i] = s[j];
		s[j] = t;
	}
}
