#include <stdio.h>
#include <stdlib.h>
/**
*print_array -  a function that prints n elements
*of an array of integers, followed by a new line.
*@a: pointer to an array
*@n: number of elements in the array
* Return: None
*/
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n - 1; i++)
	{
		if (i < n - 1)
		{
			printf("%d, ", a[i]);
		}
		if (i == n - 1)
		{
			printf("%d", a[i]);
		}
	}
	printf("\n");
}
