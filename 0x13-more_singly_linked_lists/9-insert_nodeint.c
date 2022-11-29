#include "lists.h"

/**
  * insert_nodeint_at_index - function that inserts a new node
  *                           at a given position.
  * @head: a pointer to the list head address.
  * @idx: position to insert new node
  * @n: the data of the new node.
  *
  * Return: the address of the new node, or NULL if it failed
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i, len;
	listint_t *newnode, *tmp;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	tmp = *head;
	len = 0;
	newnode->n = n;

	if (head == NULL)
		return (NULL);

	while (tmp != NULL)
	{
		tmp = tmp->next;
		len++;
	}
	if (index > len + 1)
		return (NULL);

	if (*head == NULL)
	{
		newnode->next = NULL;
		*head = newnode;
		return (newnode);
	}
	if (index == 0)
	{
		newnode->next = tmp;
		*head = newnode;
		return (newnode);
	}
	for (i = 0; i < index; i++)
		tmp = tmp->next;

	newnode->next = tmp->next;
	tmp->next = newnode;
	return (newnode);
}
