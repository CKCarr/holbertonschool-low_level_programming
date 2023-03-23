#include "lists.h"
/**
  * add_dnodeint_end - function that adds a new node
  *        at the beginning of a dlistint_t list.
  * @head: a pointer to a pointer of the head
  * of a dlistint_t list.
  * @n: integer given to give data value to new node.
  * Return: the address of the new element (&new_node)
  *
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *current;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	current = *head;
	while (current->next != NULL)
	{
	current = current->next;
	}
	current->next = new_node;
	new_node->prev = current;
	return (new_node);
}
