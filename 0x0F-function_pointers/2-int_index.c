#include <stdio.h>
/**
 * int_index - a function that searches for an integer.
 * @array: argument for array of integers.
 * @size: argument for number of elements in the array.
 * @cmp: pointer to function used to compare values.
 *
 * Return: index (Success), -1 (failure)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, j;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);
		if (j > 0)
		{
			return (i);
		}
	}
	return (-1);
}
