#include "lists.h"

/**
 * insert_nodeint_at_index - A function that insert node at a given index
 * @head: linked list
 * @idx: index to which the new node is added
 * @n: value of the newly formed
 *
 * Return: address or pointer of the new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *recent_node;
	listint_t *pre_node;

	size_t m = 0;

	recent_node = *head;

	if (idx != 0)
	{
		for (m = 0; m < idx - 1 && recent_node != NULL; m++)
		{
			recent_node = recent_node->next;
		}
	}

	if (recent_node == NULL && idx != 0)
	{
		return (NULL);
	}
	pre_node = malloc(sizeof(listint_t));
	if (pre_node == NULL)
		return (NULL);
	pre_node->n = n;

	if (idx == 0)
	{
		pre_node->next = *head;
		*head = pre_node;
	} else
	{
		pre_node->next = recent_node->next;
		recent_node->next = pre_node;
	}

	return (pre_node);
}
