#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*init_dog - initializes dog structure
*Return: void
*@d: the pointer dog object
*@name: name of the dog
*@age: how old is the dog
*@owner: name of the owner
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}
