#include "lists.h"
/**
 * free_listint - function frees a listint_t list
 *
 * @head: pointer to the head of a singly linked list
 * of listint_t.
 *
 *
 * Return: NULL if failed ( ) otherwise
 *    return void with list freed.
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
