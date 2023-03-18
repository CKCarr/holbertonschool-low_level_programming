#include "lists.h"
/**
  *insert_nodeint_at_index - function that inserts a new
  *                          node at a given position.
  * @head: pointer to head of list in a listint_t list.
  * @n: value of node in a listint_t linked list index.
  * @idx: is the index of the list where the new node
  *       should be added. Index starts at 0.
  * Return: the address of the new node,NULL if it fail
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *temp, *new_node;
	unsigned int count = 0;

		if (head == NULL)
			return (NULL);

		new_node = malloc(sizeof(listint_t));
		if (new_node == NULL)
			return (NULL);

		new_node->n = n;
		new_node->next = NULL;

		if (idx == 0)
		{
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}

		temp = *head;
		while (temp && count < idx - 1)
			temp = temp->next;
		count++;

		if (temp == NULL)
		{
			free(new_node);
			return (NULL);
		}
		new_node->next = temp->next;
		temp->next = new_node;

		return (new_node);
}
