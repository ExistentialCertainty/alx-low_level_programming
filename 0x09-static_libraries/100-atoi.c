#include <stdio.h>
/**
 * _atoi - a function that convert a string to an integer.
 * @s: string argument to be converted to integer
 *
 * Return: 0 if string is Null, result otherwise
 */
int _atoi(char *s)
{
	int result;
	int sign;

	result = 0;
	sign = 1;
	if (s[0] == '\0')
	{
		return (0);
	}
	while (*s == 32 || (*s > 8 && *s < 14))
	{
		s++;
	}
	if (*s == '-')
	{
		sign *= -1;
	}
	if (*s == '-' || *s == '+')
	{
		s++;
	}
	while (*s >= '0' && *s <= '9')
	{
		result = result * 10 + *s - '0';
		s++;
	}
	return (result * sign);
}
