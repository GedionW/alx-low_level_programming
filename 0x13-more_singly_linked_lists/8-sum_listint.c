#include "lists.h"

/**
 * sum_listint - return sum of all the data (n) of linked list
 * @head: pointer to first node in list
 *
 * Return: sum of data (n) of listint_t linked list
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
