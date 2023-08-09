#include "main.h"

/**
 * _isupper - code block
 * @c: argument to be tested
 * Description: checks a character to see if
 * it is uppercase or lowercase
 * Return: 1 if c is lower; 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
