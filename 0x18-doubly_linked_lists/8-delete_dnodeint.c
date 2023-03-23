#include "lists.h"
/**
  * delete_dnodeint_at_index -function that deletes the
  * node at index index of a dlistint_t linked list.
  * @head: pointer to a pointer of the head node of a
  * dlistint_t list.
  * @index:the index of the node that should be deleted
  * Return: 1 if it succeeded, -1 if it failed
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *current, *temp;

	if (*head == NULL)
	{
		return (-1);
	}

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	current = *head;
	for (count = 0; count < index - 1 && current != NULL; count++)
		current = current->next;

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next;
	current->next = temp->next;

	if (temp->next != NULL)
		temp->next->prev = current;
	free(temp);

	return (1);
}
