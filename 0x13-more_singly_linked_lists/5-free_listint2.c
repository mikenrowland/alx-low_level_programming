#include "lists.h"

/**
 * free_listint2 - function entry
 * @head: ptr to ptr
 * Desc: frees a list
 *
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *freed;

	if (head == NULL)
		return;
	while (*head)
	{
		freed = (*head)->next;
		free(*head);
		*head = freed;
	}
}
