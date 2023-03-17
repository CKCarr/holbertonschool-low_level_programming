#include "lists.h"
/**
 * print_listint - function prints all the elements of
 * a listint_t list
 *
 * @h: pointer to the head of a singly linked list
 * of listint_t.
 *
 *
 * Return: If str is NULL, print [0] (nil) otherwise
 * return the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
