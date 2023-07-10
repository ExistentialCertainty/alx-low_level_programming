#include <stdio.h>
#include <stdlib.h>
/**
* main - function that prints all
* the arguments it receives
* @argc: counter for string argument
* @argv: string argument
* Return: Success
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
