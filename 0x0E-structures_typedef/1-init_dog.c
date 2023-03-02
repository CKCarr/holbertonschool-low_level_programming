#include "dog.h"
#include <stdio.h>

/**
 * init_dog - Function that initializes a variable
 * of type dog struct
 *
 * @d: pointer to the struct dog
 *
 * @name: name of dog
 * @age: sge of dog
 * @owner: name of dog owner
 *
 * Description: since it is a pointer it assumes strings
 * are preallocated for 'name' & 'owner'. if you need to
 * allocate memory do it before calling 'init_dog'.
 *
 * Return: if d is NULL return nothing
 * otherwise assign name, age, and owner, to corresponding
 * fields of 'd'
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
	{
		return;
	}
	d->name = name;
	d->age = age;
	(*d).owner = owner;
}
