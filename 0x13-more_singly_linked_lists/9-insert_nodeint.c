#include "lists.h"
#include <stdlib.h>

/**
 * insert_nodeint_at_index - insterts new node at givem position
 * @head: double pointer to first node in the list
 * @idx: index of node to insert
 * @n: value of new node
 *
 * Return: pointer to indexed node
 */
listint_t *insert_nodeint_at_index(listint_t  **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *current, *new;

	if (head == NULL)
		return (NULL);
	if (idx != 0)
	{
		current = *head;
		for (i = 0; i < idx - 1 && current != NULL; i++)
		{
			current = current->next;
		}
		if (current == NULL)
			return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	new->next = current->next;
	current->next = new;
	return (new);
}
