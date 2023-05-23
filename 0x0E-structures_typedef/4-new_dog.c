#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - function that creates a new dog
 * @name: parameter 1
 * @age: parameter 2
 * @owner: parameter 3
 * Return: newdog if success
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int ln1 = strlen(name), ln2 = strlen(owner);
	dog_t *newdog;

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(ln1 + 1);
	if  (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->name, name);
	newdog->owner = malloc(ln2 + 1);
	if  (newdog->owner == NULL)
	{
		free(newdog->name);
		free(newdog);
		return (NULL);
	}
	strcpy(newdog->owner, owner);
	newdog->age = age;
	return (newdog);
}
