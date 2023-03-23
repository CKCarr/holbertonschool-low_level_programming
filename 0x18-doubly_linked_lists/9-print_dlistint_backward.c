#include "lists.h"
/**
  * print_dlistint_backward - function that prints all
  * the elements of a dlistint_t list backward.
  * @h: pointer to head of dlistint_t.
  * Return: Return: the number of nodes.
  */
size_t print_dlistint_backward(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL && current->next != NULL)
	{
		current = current->next;
	}
	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->prev;
		count++;
	}
	return (count);
}
