#include <stdio.h>
#include "main.h"

/**
 * main -  a program that prints the number of
 * arguments passed into it.
 *
 * @argc: argument count
 * @argv: argument vector containing an array of values
 * Return: 0 success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	printf("%d \n", argc - 1);
	return (0);
}
