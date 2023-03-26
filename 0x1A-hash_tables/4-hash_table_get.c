#include "hash_tables.h"
/**
  * hash_table_get - function that retrieves a value
  *                  associated with a key.
  * @ht: hash table you want to look in.
  * @key: the key you are looking for.
  * Return: value associated with element or NULL
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *node;
	unsigned long int index;

	if (!ht || !key || *key == '\0')
	{
		return (NULL);
	}
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	while (node != NULL)
	{
		if (strcmp(node->key,(char *)key) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
