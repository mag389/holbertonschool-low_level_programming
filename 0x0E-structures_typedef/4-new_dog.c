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
	int i;

	newdog = malloc(2 * sizeof(char *) + sizeof(int));
	if (newdog == NULL)
		return (NULL);

	newname = malloc(sizeof(name));
	if (newname == NULL)
		{
		free(newdog);
		return (NULL);
		}
	for (i = 0; name[i] != '\0'; i++)
		newname[i] = name[i];
	newname[i] = 0;

	newowner = malloc(sizeof(owner));
	if (newowner == NULL)
		{
		free(newname);
		free(newdog);
		return (NULL);
		}
	for (i = 0; owner[i] != 0; i++)
		newowner[i] = name[i];
	newowner[i] = 0;

	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
