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
	char *newname, *newowner;

	newdog = malloc(2 * sizeof(char *) + sizeof(int));
	if (newdog == NULL)
		return (NULL);
	newname = name;
	newowner = owner;	
	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
