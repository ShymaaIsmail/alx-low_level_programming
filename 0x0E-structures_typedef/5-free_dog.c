include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
*free_dog - free a dog n wedh eldonia
*@d: pointer to dog ibn dog
*Return: nothing
*/
void free_dog(dog_t *d)
{
if (d != NULL)
{
if (d->name != NULL)
{
free(d->name);
d->name = NULL;
}
if (d->owner != NULL)
{
free(d->owner);
d->owner = NULL;
}
free(d);
d = NULL;
}
}
