#include "lists.h"
/**
  *free_list - Write a function that frees a list_t list
  *
  *@head: pointer to a list_t list.
  *
  *Return: void
  *
  *
  */
void free_list(list_t *head)
{
	list_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp->str);
		free(temp);
	}
}