#include "main.h"

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int count;
	unsigned int denary;

	denary = 0;
	if (b == NULL)
	{
		return (0);
	}
	for (count = 0; b[count] != '\0'; a++)
	{
		if (b[count] != '0' && b[count] != '1')
		{
			return (0);
		}
	}
	for (count = 0; b[count] != '\0'; a++)
	{
		denary <<= 1;
		if (b[count] == '1')
			denary += 1;
	}
	return (denary);
}
