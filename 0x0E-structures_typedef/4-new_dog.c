#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
*new_dog - creates a new dog
*Return: the new dog
*@name: the dog's name
*@age: the dog's age
*@owner: the dog's owner's name
*/
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	newdog = malloc(2 * sizeof(char *) + sizeof(int));
	if (newdog == NULL)
		return (NULL);
	newdog->name = name;
	newdog->age = age;
	newdog->owner = owner;

	return (newdog);
}
