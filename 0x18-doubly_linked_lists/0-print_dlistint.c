#include "lists.h"
/**
  * print_dlistint -  prints all the elements of a dlistint_t list.
  * @h: pointer to head of a dlistint_t list
  * Return: return elements and number of list elements.
  */
size_t print_dlistint(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}