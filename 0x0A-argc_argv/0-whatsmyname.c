#include <stdio.h>
#include "main.h"


/**
 * main -  a program that prints its name, followed
 * by a new line. If you rename the program, it will
 * print the new name, without having to compile it again
 *
 * @argc: argument count
 * @argv: argument vector containing an array of values
 * Return: 0 success
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
