#include <stdio.h>
/**
 * print_name - A function that prints name
 * @name: argument to be printed
 * @f: function pointer to name
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
	if (f == NULL)
	{
		return;
	}
}
