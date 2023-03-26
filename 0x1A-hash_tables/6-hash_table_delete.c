#include "hash_tables.h"
/**
  * hash_table_delete- function deletes a hash table.
  * @ht: hash table to be deleted.
  * Return: void
  */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *node;
	unsigned long int index;

	if (ht == NULL)
	{
		return;
	}
	for (index = 0; index < ht->size; index++)
	{
		node = ht->array[index];
		while (node)
		{
			temp = node;
			node = node->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
