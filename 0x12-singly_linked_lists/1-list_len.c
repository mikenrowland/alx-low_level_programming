#include "lists.h"

/**
 * list_len - function entry
 * @h: ptr to head of list
 * Desc: returns the number of elements
 * in a linked list_t list.
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	while (h != NULL)
	{
		if (h->str || h->len)
			length++;
		h = h->next;
	}
	return (length);
}
