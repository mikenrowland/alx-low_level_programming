#include "lists.h"

/**
 * insert_nodeint_at_index - function entry
 * @head: ptr to list
 * @idx: position to insert node
 * @n: element to insert
 * Desc: a function that inserts a new node
 * at a given position
 * Return: addr of new node or NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *newNode;
	listint_t *tmp = *head;
	unsigned int i = 0;

	newNode = malloc(sizeof(listint_t));
	if (newNode == NULL)
		return (NULL);
	newNode->n = n;
	if (idx == 0)
	{
		newNode->next = *head;
		*head = newNode;
		return (newNode);
	}
	while (i < (idx - 1))
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	newNode->next = tmp->next;
	tmp->next = newNode;

	return (newNode);
}


