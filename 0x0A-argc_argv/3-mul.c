#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main -   a program that multiplies two numbers.
 * print the result of the multiplication, followed
 * by a new line. If the program does not receive two
 * arguments, your program should print Error, followed
 * by a new line
 *
 * @count: argument count
 * @argv: argument vector containing an array of values
 * Return: 0 success
 */
int main(int count, char *argv[])
{
	int mul;

	if (count == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
		return (0);
	}
	printf("Error\n");
	return (1);
}
