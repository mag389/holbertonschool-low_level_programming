#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
char *_strdup(char *str);
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

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
		return (NULL);
	if (name != NULL)
	{
		newname = _strdup(name);
		if (newname == NULL)
			{
			free(newdog);
			return (NULL);
			}
	}
	else
		newname = NULL;
	if (owner != NULL)
	{
		newowner = _strdup(owner);
		if (owner == NULL)
			{
			free(newname);
			free(newowner);
			free(newdog);
			return (NULL);
			}
	}
	else
		newowner = NULL;
	newdog->name = newname;
	newdog->age = age;
	newdog->owner = newowner;

	return (newdog);
}
/**
*_strdup - creates array
*Return:char or null
*@str:the string to copy from
*/
char *_strdup(char *str)
{
	int i, size = 0;
	char *thearray;

	if (str == NULL)
		return (NULL);

	while (str[size] != 0)
		size++;
	thearray = malloc(size * sizeof(char) + 1);

	if (thearray == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		thearray[i] = str[i];
	}
	thearray[i] = '\0';

	return (thearray);
}
