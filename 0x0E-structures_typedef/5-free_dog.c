#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*free_dog - frees the dog and it's attributes
*Return: void
*@d: the dog to free
*/
void free_dog(dog_t *d)
{
	free(d->name);
/*	free(d->age);*/
	free(d->owner);
	free(d);

}
