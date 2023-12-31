#include <stdio.h>
#include "dog.h"

/**
*init_dog - initialize an instance from dog
*@d: dog pointer
*@name: name
*@age: age
*@owner: owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
