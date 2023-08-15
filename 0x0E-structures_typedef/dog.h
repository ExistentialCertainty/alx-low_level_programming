#ifndef HEADER_FILE
#define HEADER_FILE
/**
 * struct dog - function that contains the attributes of a dog.
 * @name: Name argument of the dog.
 * @age: Age argument of the dog.
 * @owner: Owner argument of the dog.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
