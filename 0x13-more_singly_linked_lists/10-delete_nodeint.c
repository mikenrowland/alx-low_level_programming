#include "lists.h"

/**
 * delete_nodeint_at_index - function entry
 * @head: ptr to list
 * @index: position of node to delete
 * Desc: a function that deletes a node
 * at a given position
 * Return: 1 on success, -1 on fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete;
	listint_t *tmp = *head;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1))
	{
		if (tmp == NULL)
			return (-1);
		tmp = tmp->next;
		i++;
	}
	delete = tmp->next;
	tmp->next = delete->next;
	free(delete);

	return (1);
}


