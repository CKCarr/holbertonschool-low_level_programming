#include "lists.h"
/**
* add_node -  function that adds a new node at the
*              beginning of a list_t list.
*
* @head: pointer to the head of the linked list.
*
* @str: pointer to str to be duplicated and stored as
*       new node data.
*
* Return: address of new element or Null if failed.
*/
list_t *add_node(list_t **head, const char *str)
{

	list_t *new_node = malloc(sizeof(list_t));
	size_t len = strlen(str);

	if (new_node == NULL)
		return (NULL);

	new_node->str = strndup(str, len);
	if (new_node->str == NULL)
	{
		free(new_node);
		return (NULL);
	}
	new_node->len = len;
	new_node->next = NULL;

	if (*head != NULL)
		new_node->next = *head;

	*head = new_node;

	return (new_node);
}