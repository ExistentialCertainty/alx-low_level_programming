#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -   a program that adds positive numbers,
 * print the result, followed by a new line If no
 * number is passed to the program, print 0, followed
 * by a new line. If one of the number contains symbols
 * that are not digits, print Error, followed by a new line
 *
 * @argc: argument count
 * @vector: argument vector containing an array of values
 * Return: 0 success
 */
int main(int argc, char *vector[])
{
	int i;
	int sum;

	if (argc == 0)
	{
		printf("0\n");
	}
	if (argc > 0)
	{
		sum = 0;
		for (i = 1; i < argc; i++)
		{
			if (atoi(vector[i]) > 0)
			{
				sum += atoi(vector[i]);
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}
	return (0);
}
