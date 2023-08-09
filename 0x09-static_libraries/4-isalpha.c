#include <stdio.h>
#include <ctype.h>

/**
* _isalpha - prototype
* @c: argument to be checked
* Description: function that checks for upper
* and lowercase letters.
* Return: 1 for true, 0 for false
*/

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	return (0);
}
