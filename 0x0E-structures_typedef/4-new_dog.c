#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - Creates a new dog structure and copies name and owner.
 * @name: Pointer to the name of the dog.
 * @age: Age of the dog.
 * @owner: Pointer to the owner's name.
 *
 * Return: Pointer to the new dog structure, or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0;
	int k;

	dog_t *doge;

	while (name[name_len] != '\0')
	{
		name_len++;
	}
	while (owner[owner_len] != '\0')
	{
		owner_len++;
	}
	doge = (dog_t *)malloc(sizeof(dog_t));
	if (doge == NULL)
		return (NULL);
	doge->name = (char *)malloc(name_len + 1);
	if (doge->name == NULL)
	{
		free(doge);
		return (NULL); }
	for (k = 0; k < name_len; k++)
	{
		doge->name[k] = name[k];
	}
	doge->name[name_len] = '\0';
	doge->age = age;
	doge->owner = (char *)malloc(owner_len + 1);
	if (doge->owner == NULL)
	{
		free(doge->name);
		free(doge);
		return (NULL); }
	for (k = 0; k < owner_len; k++)
	{
		doge->owner[k] = owner[k];
	}
	doge->owner[owner_len] = '\0';
	return (doge);
}
