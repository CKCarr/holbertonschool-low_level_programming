#include "lists.h"
/**
 * add_nodeint_end - function that adds a new node at the end
 *                   of a listint_t list.
 *
 * @head: pointer to the head of a singly linked list
 * of listint_t.
 * @n: value to be assigned to new node (ending node is always NULL)
 *
 * Return: NULL if failure ( otherwise )
 *    return address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *index_node;
	listint_t *new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	new_node->next = NULL;

	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	index_node = *head;
	while (index_node->next != NULL)
	{
		index_node = index_node->next;
	}
	index_node->next = new_node;

	return (new_node);
}
