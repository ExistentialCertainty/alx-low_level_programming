#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
* positive_or_negative - checks if an integer
* is positive or negative
* @i: value to checked
*/
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive\n", i);
	} else if (i < 0)
	{
		printf("%d is negative\n", i);
	} else
	{
		printf("%d is zero\n", i);
	}
}
