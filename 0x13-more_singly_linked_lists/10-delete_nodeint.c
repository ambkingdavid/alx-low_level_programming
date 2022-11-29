#include "lists.h"

/**
  * delete_nodeint_at_index - function that deletes the node at
  *                           index index of a listint_t linked list
  * @head: pointer to the head of the list.
  * @index: index of node to be deleted.
  *
  * Return: 1 if it succeeded, -1 if it failed.
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *prev, *current;
	unsigned int i;

	previous = current = *head;

	if (current == NULL)
		return (-1);

	if (index == 0)
	{
		*head = *head->next;
		free(current);
		return (1);
	}

	for (i = 0; i < (index - 1); i++)
	{
		if (previous->next == NULL)
			return (-1);
		previous = previous->next;
	}

	current = previous->next;
	previous = current->next;
	free(current);
	return (1);
}
