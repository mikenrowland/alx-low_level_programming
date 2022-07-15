#include "lists.h"

/**
 * add_node_end - function entry point
 * @head: ptr to head node
 * @str: to be copied
 * Desc: a function that adds a new node
 * at the end of a list_t list.
 * Return: addr of new node or Null on fail
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *last = *head;

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next)
		last = last->next;
	last->next = new;

	return (new);
}
