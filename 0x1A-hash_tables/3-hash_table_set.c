#include "hash_tables.h"
/**
  * hash_table_set- adds an element to the hash table.
  * @ht: the table you want to add or update key/value.
  * @key: the key, cannot be an empty string.
  * @value: value associated with key.
  * Return: 1 if succeeded, 0 if otherwise.
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp_node, *new_node;
	unsigned long int index = 0;

	if (!ht || !key || !value || strlen(key) == 0)
	{
		return (0);
	}
	index = key_index((unsigned char *)key, ht->size);
	temp_node = ht->array[index];
	while (temp_node)
	{
		if (strcmp(temp_node->key, key) == 0)
		{
			free(temp_node->value);
			temp_node->value = strdup(value);
			return (1);
		}
		temp_node = temp_node->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		free(new_node);
		return (0);
	}
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
