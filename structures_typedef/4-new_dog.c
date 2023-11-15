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
	if (dog == NULL)
	{
		return (NULL);
	}
	newdog->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	newdog->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(d->name);
		return (NULL);
	}
	strcpy(d->name, name);
	newdog->age = age;
	strcpy(d->owner, owner);
	return (newdog);
}
