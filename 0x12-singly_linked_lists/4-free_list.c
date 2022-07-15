#include "lists.h"

/**
 * free_list - function entry point
 * @head: ptr to list to free
 * Desc: a function that frees a list_t list
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *freed;

	while (head)
	{
		freed = head;
		head = head->next;
		free(freed->str);
		free(freed);
	}
}	
