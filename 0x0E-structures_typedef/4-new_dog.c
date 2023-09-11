#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*new_dog - creates a new instance of the dog
*@name: name
*@age: age
*owner: owner
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *baby_dog = malloc(sizeof(dog_t));
if (baby_dog != NULL)
{
baby_dog->name = name;
baby_dog->age = age;
baby_dog->owner = owner;
}
return (baby_dog);
}
