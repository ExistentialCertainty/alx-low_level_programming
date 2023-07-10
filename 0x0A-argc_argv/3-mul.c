#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that receives only 2 integers
 * and multiplies them. It prints Error if the
 * number of integers is not 2.
 * @argc: Counter for parameters recieved
 * @argv: String inputed into the fuction
 *
 * Return: Failure(1), Success(0)
 */
int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
