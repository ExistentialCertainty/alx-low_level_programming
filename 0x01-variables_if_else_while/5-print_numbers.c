#include <stdio.h>
/**
* main - Entry point
* Description: prints the single digit numbers
* Return: Always 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	printf("\n");
	return (0);
}
