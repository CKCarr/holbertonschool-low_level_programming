#include "dog.h"
#include <stdlib.h>
/**
  * new_dog - function that creates a new dog.
  * @name: name of new_dog for dog_type struct.
  * @age: age of new_dog for dog_type struct.
  * @owner: owner name of new_dog of dog_type struct.
  * Return: initialized new 'dog_t' object 'new_dog'
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int name_len = 0, owner_len = 0, success = 0, index;

	dog_t *dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return (NULL);
	}
	while (name[name_len] != '\0')
		name_len++;
	dog->name = malloc(name_len + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (index = 0; index <= name_len; index++)
		dog->name[index] = name[index];
	while (owner[owner_len] != '\0')
		owner_len++;
	dog->owner = malloc(owner_len + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (index = 0; index <= owner_len; index++)
		dog->owner[index] = owner[index];
	dog->age = age;
	success = 1;
	if (!success)
	{
		free(dog->name);
		free(dog->owner);
		free(dog);
		exit(EXIT_FAILURE);
	}
	return (dog);
}
