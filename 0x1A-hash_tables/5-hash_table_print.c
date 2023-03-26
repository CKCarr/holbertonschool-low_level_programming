#include "hash_tables.h"
/**
  * hash_table_print -function that prints a hash table
  * @ht: hash table to be printed.
  * Return: key/value in the order they appear.
  */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *node;
	int flag;
	unsigned long int index;

	if (ht == NULL)
	{
		return;
	}
	printf("{");

	for (index = 0; index <= ht->size; index++)
	{
	
		node = ht->array[index];
		while (node != NULL)
		{
			if (flag == 1)
				printf(", ");
			printf("'%s': '%s'", node->key, node->value);
			flag = 1;
			node = node->next;
		}
	}
	printf("}\n");
}
