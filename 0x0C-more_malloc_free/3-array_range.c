#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * array_range -  a function that creates an array of integers.
 * The array created should contain all the values from min
 * (included) to max (included), ordered from min to max.
 * @min: minimum integer argument.
 * @max: maximum integer argument.
 * Return: Null if min > max or if array is null. Otherwise,
 * array is returned.
 */
int *array_range(int min, int max)
{
	int *array;
	int i;
	int size;

	if (min > max)
	{
		return ('\0');
	}
	size = max - min + 1;
	array = malloc(sizeof(int) * size);
	if (array == NULL)
	{
		return ('\0');
	}
	for (i = 0; i < size; i++)
	{
		array[i] = min + i;
	}
	return (array);
}

