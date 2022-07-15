#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 *  * main - check the code
 *   *
 *    * Return: Always 0.
 *     */
int main(void)
{
	list_t *head;

	head = NULL;
	add_node_end(&head, "Alexandro");
	add_node_end(&head, "Asaia");
	add_node_end(&head, "Augustin");
	add_node_end(&head, "Bennett");
	add_node_end(&head, "Bilal");
	add_node_end(&head, "Chandler");
	add_node_end(&head, "Damian");
	add_node_end(&head, "Daniel");
	add_node_end(&head, "Dora");
	add_node_end(&head, "Electra");
	add_node_end(&head, "Gloria");
	add_node_end(&head, "Joe");
	add_node_end(&head, "John");
	add_node_end(&head, "John");
	add_node_end(&head, "Josquin");
	add_node_end(&head, "Kris");
	add_node_end(&head, "Marine");
	add_node_end(&head, "Mason");
	add_node_end(&head, "Praylin");
	add_node_end(&head, "Rick");
	add_node_end(&head, "Rick");
	add_node_end(&head, "Rona");
	add_node_end(&head, "Siphan");
	add_node_end(&head, "Sravanthi");
	add_node_end(&head, "Steven");
	add_node_end(&head, "Tasneem");
	add_node_end(&head, "William");
	add_node_end(&head, "Zee");
	print_list(head);
	return (0);
}
