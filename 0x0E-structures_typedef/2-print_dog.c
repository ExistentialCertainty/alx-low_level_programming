#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * @d: pointer to struct dog
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	printf("Name: ");
	if (d->name != NULL)
	{
		printf("%s", d->name);
	}
	else
	{
		printf("(nil)");
	}
	printf("\n");
	printf("Age: %.1f\n", d->age);
	printf("Owner: ");
	if (d->owner != NULL)
	{
		printf("%s", d->owner);
	}
	else
	{
		printf("(nil)");
	}
	printf("\n");
}
