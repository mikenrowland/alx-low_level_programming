#include "lists.h"

/**
 * add_nodeint - function entry
 * @head: ptr to ptr to head
 * @n: int
 * Desc: adds a new node at the
 *	 beginning of a listint_t list
 *
 * Return: addr of new element or NULL on fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;

	return (newNode);
}
