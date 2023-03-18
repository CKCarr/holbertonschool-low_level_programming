#include "lists.h"
/**
  * sum_listint - function that returns the
  *
  *
  * @head: pointer to the first node of a listint_t
  *        linked list.
  *
  *
  * Return: the sum of all integers stored in the n
  *         field of each node in the list.
  *         if the node does not exist, return NULL.
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	current = head;
	while (current != NULL)
	{
		sum = sum + current->n;
		current = current->next;
	}
	return (sum);
}
