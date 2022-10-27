#include "lists.h"

/**
 * get_nodeint_at_index - returns nth node in list
 * @index: index of node t return
 *
 * Return: pointer to indexed node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head == NULL)
		return (NULL);
	for (i = 0; i < index; i++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
