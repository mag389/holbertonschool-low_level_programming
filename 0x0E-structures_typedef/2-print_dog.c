#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*print_dog - pritns the given dog's attributes
*Return: void
*@d: the given dog
*/

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit(0);
	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nil)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nil)");
}
