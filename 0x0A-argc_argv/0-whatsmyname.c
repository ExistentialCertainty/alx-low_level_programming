#include <stdio.h>
#include <stdlib.h>
/**
 * main - function block that prints
 * its name followed by a new line
 * @argc: counter for string argument
 * @argv: string argument
 * Return: Success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
