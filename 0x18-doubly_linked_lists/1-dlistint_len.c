#include "lists.h"
/**
  * dlistint_len -  function that returns the number of
  * elements in a linked dlistint_t list.
  * @h: pointer to head of dlistint_t list.
  * Return: integer number of count of dlistint_t list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
