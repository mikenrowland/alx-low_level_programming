#include "lists.h"

/**
 * get_nodeint_at_index - function entry
 * @head: ptr to list
 * @index: position of node
 * Desc: function that returns the nth node
 *	of a listint_t linked list.
 * Return: node at index or NULL if absent
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int n = 0;

	if (head == NULL)
		return (NULL);
	while (n < index)
	{
		head = head->next;
		n++;
	}
	return (head);
}
