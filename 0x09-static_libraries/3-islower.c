#include <stdio.h>
#include <ctype.h>
/**
* _islower - function that checks for lower
* case letters.
* @c: char to be checked.
* Description: checks each inputed arguments
* and prints 1 for lower case letters,
* prints 0 otherwise
* Return: 1 for true, 0 for false
*/

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
