#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all hexa-decimal digits
 * Return: 0 success
 */

int main(void)
{
	int num = '0';
	char alpha = 'a';

	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	for (alpha = 'a'; alpha <= 'f'; ++alpha)
	{
		putchar(alpha);
	}
	putchar('\n');
	return (0);
}
