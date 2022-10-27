#include "lists.h"

/**
 * listing_len - return nummber of elements in a linked listint_t list
 *
 * Return: number of elements in linked listint_t list
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
