#include "dog.h"
#include <stdlib.h>
/**
  * free_dog - function that frees dogs.
  * @d: dog_type string memalloc
  * Return: return void if null & || freed
  */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return;
	}
	free(d->name);
	free(d->owner);
	free(d);
}
