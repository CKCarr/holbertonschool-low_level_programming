#include "lists.h"
/**
  * get_nodeint_at_index - function that returns the
  * the nth node of a listint_ linked list.
  *
  * @head: pointer to the first node of a listint_t
  *        linked list.
  * @index: the index of the node starting at 0.
  *
  * Return: the nth node of a listint_t linked list,
  *         if the node does not exist, return NULL.
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int count = 0;

	if (head == NULL)
		return (NULL);

	while (current != NULL && count < index)
	{
		current = current->next;
		count++;
	}
	if (count < index || current == NULL)
		return (NULL);

	return (current);
}
