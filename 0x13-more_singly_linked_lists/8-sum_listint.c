#include "lists.h"

/**
 * sum_listint - function entry
 * @head: ptr to list
 * Desc: a function that returns the sum of all
 *	the data (n) of a listint_t linked list
 * Return: sum of data or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
