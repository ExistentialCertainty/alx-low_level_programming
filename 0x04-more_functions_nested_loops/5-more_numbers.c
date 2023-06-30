#include <stdio.h>
/**
* more_numbers - code block
* Description: prints all digits from
* 0 -14 ten times
*/
void more_numbers(void)
{
	int space;
	int num1;
	int num2;

	for (space = 0;  space < 10; space++)
	{
		for (num1 = 0; num1 < 10; num1++)
		{
			putchar('0' + num1);
		}
		num1 = 1;
		for (num2 = 0; num2 < 5; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
		}
		putchar('\n');
	}
}
