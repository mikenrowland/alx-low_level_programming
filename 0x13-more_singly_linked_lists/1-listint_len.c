#include "lists.h"

/**
 * listint_len - function entry
 * @h: ptr to head node
 * Desc: a function that returns the number
 * of elements in a linked listint_t list
 *
 * Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	unsigned int len = 0;

	while (h)
	{
		h = h->next;
		len++;
	}
	return (len);
}
