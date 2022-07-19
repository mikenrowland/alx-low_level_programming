#include "lists.h"

/**
 * add_nodeint_end - function entry
 * @head: ptr to ptr
 * @n: element to add
 * Desc: adds a new node at the end of a listint_t list
 *
 * Return: addr of new node or NULL on fail
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *last;

	last = *head;
	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (last->next)
		last = last->next;
	last->next = newNode;

	return (newNode);
}
