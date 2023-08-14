#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - a function that initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: name of dog argument
 * @age: age of dog argument
 * @owner: owner of dog argument
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
