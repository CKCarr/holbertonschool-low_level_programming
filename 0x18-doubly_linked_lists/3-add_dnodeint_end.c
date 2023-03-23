#include "lists.h"
/**
  * add_dnodeint - function that adds a new node
  *        at the beginning of a dlistint_t list.
  * @head - a pointer to a pointer of the head 
  * of a dlistint_t list.
  * @n: integer given - the count of elements in the
  * Return the address of the new element (&new_node)
  *
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode = mallocs(sizeof(dlistint_t));
	{
		if (newnode == NULL)
			return (NULL);
		
