#include <stdio.h>
/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array.
 * @array: argument containing array of integers
 * @size: argument for size of the array
 * @action: pointer to the function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long int i;

	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
