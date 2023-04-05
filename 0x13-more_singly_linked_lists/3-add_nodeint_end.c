#include "lists.h"
/**
 * add_nodeint_end - add node to the end of a linked list
 * @head: linked list
 * @n: value of int n
 * Return: number of the new variable or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *recent_node;
	listint_t *var_node = *head;

	recent_node = malloc(sizeof(listint_t));
	if (recent_node == NULL)
		return (NULL);

	recent_node->n = n;
	recent_node->next = NULL;

	if (*head == NULL)
	{
		*head = recent_node;
	}
	else
	{
		while (var_node->next != NULL)
				{
			var_node = var_node->next;
		}
		var_node->next = recent_node;
	}
	return (*head);
}
