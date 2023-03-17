#include "lists.h"
/**
 * listint_len  - function prints all the elements of
 * a listint_t list
 *
 * @h: pointer to the head of a singly linked list
 * of listint_t.
 *
 *
 * Return: If str is NULL ( ) otherwise
 *    return the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		len++;
		h = h->next;
	}
	return (len);
}
