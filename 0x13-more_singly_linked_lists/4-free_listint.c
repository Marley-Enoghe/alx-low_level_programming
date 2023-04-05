#include "lists.h"

/**
 * free_listint - A function that frees a linked list
 * @head: listint_t list to be freed
 * Return: NOTHING
 */
void free_listint(listint_t *head)
{
	listint_t *var_node;

	while (head != NULL)
	{
		var_node = head;
		head = head->next;
		free(var_node);
	}
}
