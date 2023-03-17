#include "lists.h"
/**
 * add_nodeint- function adds new node to the beginning of
 * a listint_t list
 *
 * @head: pointer to the head of a singly linked list
 * of listint_t.
 * @n: the value of the node to be added.
 *
 * Return: If fail return NULL ( ) otherwise
 *    return address of the new element.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
	{
		return (NULL);
	}

	new_node->n = n;

	new_node->next = *head;

	*head = new_node;

	return (new_node);
}
