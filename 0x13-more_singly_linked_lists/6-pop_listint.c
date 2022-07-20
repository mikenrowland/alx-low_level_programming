#include "lists.h"

/**
 * pop_listint - function entry
 * @head: ptr ptr
 * Desc: deletes the head node of a linked list,
 *	and returns the head nodes data (n).
 *
 * Return: int
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *pop;

	if (*head == NULL)
		return (0);
	if (*head)
	{
		n = (*head)->n;
		pop = (*head)->next;
		free(*head);
		*head = pop;
	}
	return (n);
}
