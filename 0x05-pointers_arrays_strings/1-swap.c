#include <stdio.h>

/**
*swap_int -  a function that swaps the
*values of two integers
*
*@a: first parameter
*@b: second parameter
*Return: none
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *b;
	*b = *a;
	*a = c;
}
