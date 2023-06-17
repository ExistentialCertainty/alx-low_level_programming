#include <stdio.h>
#include <string.h>
/**
*main - entry poin
*Return: Always 1 to standard error
*/
int main(void)
{
	char str[] =
		"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	fwrite(str, sizeof(char), strlen(str), stderr);
	return (1);
}
