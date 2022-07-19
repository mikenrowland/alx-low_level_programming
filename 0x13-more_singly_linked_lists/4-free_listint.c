#include "lists.h"

/**
 * free_listint - function entry
 * @head: ptr to list
 * Desc: a function that frees a listint_t list
 *
 * Return: void
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	while (head->next)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
