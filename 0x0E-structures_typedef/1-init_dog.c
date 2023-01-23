#include "dog.h"

/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to a variable of type struct dog
 * @name: string of dog's name
 * @age: dog's age
 * @owner: string containing dog owner's name
 * Description: This struct is for dog
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
