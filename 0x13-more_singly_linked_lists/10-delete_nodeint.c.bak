#include "lists.h"
/**
  * delete_nodeint_at_index - function that deletes the
  *      node at index index of a listint_t linked list.
  * @head: pointer 2 pointer of first node.
  * @index: index is the index of the node that
  *         should be deleted. Index starts at 0.
  * Return: 1 if it succeeded, -1 if it failed.
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *previous, *current;
	unsigned int count;

	if (*head == NULL)
	{
		return (-1);
	}

	temp = *head;

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	previous = *head;

	current = (*head)->next;

	for (count = 1; count < index; count++)
	{
		if (current == NULL)
		{
			return (-1);
		}
		previous = current;
		current = current->next;
	}

	previous->next = current->next;
	current->next = NULL;
	free(current);

	return (1);
}
