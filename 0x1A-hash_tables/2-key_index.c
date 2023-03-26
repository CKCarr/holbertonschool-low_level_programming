#include "hash_tables.h"
/**
  * key_index - function that gives you the index
  *             of a key.
  * @key: is the key.
  * @size: is the size of the array of the hash table.
  * Description: function should use the hash_djb2
  *              function that you wrote earlier.
  * Return: the index at which the key/value pair should
  *         be stored in the array of the hash table.
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index_keyhash;

	if (key == NULL)
	{
		return (0);
	}
	index_keyhash = hash_djb2(key) % size;

	return (index_keyhash);
}
