#include "lists.h"

/**
 * sum_listint - sum all the data of a linked list
 * @head: node
 *
 * Return: sum of all node values
 */
int sum_listint(listint_t *head)
{
	int add = 0;

	while (head != NULL)
	{
		add = add + head->n;
		head = head->next;
	}
	return (add);
}
