#include "hash_tables.h"
/**
  * hash_table_create - Create a new hash table.
  * @size: size of the hash table.
  * Return: new hash table.
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_t = NULL;
	unsigned long int index;

	if (size < 1)
		return (NULL);

	new_hash_t = malloc(sizeof(hash_table_t));
	if (new_hash_t == NULL)
		return (NULL);

	new_hash_t->array = malloc(sizeof(hash_table_t *) * size);
	if (new_hash_t->array == NULL)
	{
		free(new_hash_t);
		return (NULL);
	}
	new_hash_t->size = size;
	for (index = 0; index < size; index++)
	{
		new_hash_t->array[index] = NULL;
	}
	return (new_hash_t);
}
