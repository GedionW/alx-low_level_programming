#include "lists.h"

/**
 * list_len - finds number of elemnts in linked lists
 * @h: pointer to strat of linked list
 *
 * Return: number of elements in linked list
 */
size_t list_len(const list_t *h)
{
	const list_t *tmp;
	unsigned int i;

	tmp = h;
	for (i = 0; tmp; i++)
		tmp = tmp->next;
	return (i);
}
