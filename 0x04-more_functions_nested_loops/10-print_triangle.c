#include <stdio.h>

/**
 * print_triangle - code block
 * @size: Argument that indicates the size of the triangle
 * Description: A function that prints a triangle followed by a new line
 * You can only use _putchar function to print
 * Where size is the size of the triangle
 * If size is 0 or less, the function should print only a new line
 * Use the character # to print the triangle
 */
void print_triangle(int size)
{
	int i;
	int j;
	int k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j >= 0; j--)
			{
				putchar(' ');
			}
			for (k = 1; k <= i; k++)
			{
				putchar('#');
			}
			putchar('\n');
		}
	}
}
