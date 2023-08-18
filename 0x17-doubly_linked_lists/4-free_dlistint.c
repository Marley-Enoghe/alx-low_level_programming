#include "lists.h"
/**
 * free_dlistint - Used for freeing a dlistint_t list.
 * @head: A pointer to head of the list
 * Return: nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
