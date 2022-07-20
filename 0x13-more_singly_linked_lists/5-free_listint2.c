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
	listint_t *freeList = *head;

	if (*head == NULL)
		return;
	while (freeList)
	{
		free(freeList);
		freeList = freeList->next;
	}
	free(freeList);
}
