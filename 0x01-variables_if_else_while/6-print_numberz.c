#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints all decimal digits
 * Return: 0 success
 */

int main() {
       	int num;
       	for (num = '0'; num <= '9'; ++num)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
