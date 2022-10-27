#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes head node of listint_t linked list
 * @head: double pointer to beginning of list
 *
 * Return: head of nodes data (n)
 */
int pop_listint(listint_t **head)
{
	listint_t *first;
	int n;

	if (head == NULL || *head == NULL)
		return (0);
	first = *head;
	*head = first->next;
	n = first->n;
	free(first);
	return (n);
}
