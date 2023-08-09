#include "main.h"

/**
* _isdigit - code block
* @c: argument to be tested
* Description: checks a character to see if
* it is a digit ranging from 0-9 or not
* Return: 1 if c is true; 0 otherwise
*/
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
