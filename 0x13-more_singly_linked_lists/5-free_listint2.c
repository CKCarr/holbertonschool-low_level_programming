#include "lists.h"
/**
 * free_listint2 - function frees a listint_t list
 * function and sets head to NULL.
 *
 * @head: pointer to the head of a singly linked list
 * of listint_t.
 *
 *
 * Return: NULL if failed ( ) otherwise
 *    return void with list freed.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}
	*head = NULL;
}
