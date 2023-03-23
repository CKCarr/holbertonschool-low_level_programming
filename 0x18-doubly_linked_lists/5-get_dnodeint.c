#include "lists.h"
/**
  * get_dnodeint_at_index - function that returns the
  * nth node of a dlistint_t linked list
  * @head: pointer to head of dlistint_t list
  * @index:  the index of the node, starting from 0.
  * Return: if the node does not exist, return NULL
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current;

	unsigned int count = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;
	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count < index || current == NULL)
	{
		return (NULL);
	}
	return (current);
}

