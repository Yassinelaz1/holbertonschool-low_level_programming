#include "dog.h"
/**
 * new_dog -function that creates a new dog.
 * @name: the  dog name
 * @age: age of the dog
 * @owner: the owner
 * Return: dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;

	if (name == NULL)
	{
		return (NULL);
	}
	if (owner == NULL)
	{
		return (NULL);
	}
	if (age < 0)
	{
		return (NULL);
	}

	newdog = malloc(sizeof(dog_t));
	if (newdog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (newdog->name == NULL)
	{
		free(newdog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (newdog->owner == NULL)
	{
		free(newdog);
		free(newdog->name);
		return (NULL);
	}
	newdog->name =strcpy(newdog->name, name);
	newdog->age = age;
	newdog->owner = strcpy(newdog->owner, owner);
	return (newdog);
}
