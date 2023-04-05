#include "lists.h"
/**
 * free_listint2 - frees a linked list
 * @head: pointer to the linked list
 * Return: NOTHING
 */
void free_listint2(listint_t **head)
{
	listint_t *now, *temp;

	if (head !=  NULL)
	{
		now = *head;
		while (now != NULL)
		{
			temp = now;
			now = now->next;
			free(temp);
		}
		*head = NULL;
	}
}
