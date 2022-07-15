#include "lists.h"

/**
 * add_node - function entry point
 * @head: ptr to the list
 * @str: str to be duplicated
 * Desc: a function that adds a new node
 * at the beginning of a list_t list
 * Return: addr of new element or NULL on fail
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		printf("Error\n");
		return (NULL);
	}
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
