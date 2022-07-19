#include "lists.h"

/**
 * print_listint - function entry point
 * @h: pointer to head
 * Desc: prints all the elements of a listint_t list.
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int len = 0;

	while(h)
	{
		printf("%d\n", h->n);
		h = h->next;
		len++;
	}
	return (len);
}
