#include "lists.h"
/**
 * pop_listint - function frees a listint_t list
 * function and sets head to NULL.
 *
 * @head: pointer to the head of a singly linked list
 * of listint_t.
 *
 *
 * Return: NULL if failed (0 if linked list is empty) otherwise
 *    return head nodes data.
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *temp = *head;

	if (*head == NULL)
		return (0);

	*head = (*head)->next;
	data = temp->n;
	free(temp);

	return (data);
}
