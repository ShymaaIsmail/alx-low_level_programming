#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*new_dog - creates a new instance of the dog
*@name: name
*@age: age
*@owner: owner
*Return: pointer to dog
*/
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *baby_dog = malloc(sizeof(dog_t));
if (baby_dog != NULL)
{
char *name_copy = malloc(sizeof(char) * strlen(name));
char *owner_copy = malloc(sizeof(char) * strlen(owner));

strcpy(name_copy, name);
strcpy(owner_copy, owner);
baby_dog->name = name_copy;
baby_dog->age = age;
baby_dog->owner = owner_copy;
}
return (baby_dog);
}
