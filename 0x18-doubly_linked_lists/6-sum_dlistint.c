#include "lists.h"
/**
  * sum_dlistint - function that returns the sum of all
  * the data (n) of a dlistint_t linked list.
  * @head: pointer to head of a dlistint_t list.
  * Return: if the list is empty, return 0 otherwise
  * returns the sum of all the data.
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current;
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}

	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
