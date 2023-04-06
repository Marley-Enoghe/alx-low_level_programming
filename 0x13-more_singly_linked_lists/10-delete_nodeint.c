#include "lists.h"
/**
 * delete_nodeint_at_index - This is a function that delete a node at a given index
 * @head: A pointer to head node in the list
 * @index: index to the new node that will be  evaluated
 * Return: And return 1 if it succeeds or  -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *main, *now_node;
	size_t i;

	if (*head == NULL)
		return (-1);

	main = *head;
	if (index == 0)
	{
		*head = (*head)->next;
		free(main);
		return (1);
	}

	i = 0;
	while (i < index - 1)
	{
		if (!main || !(main->next))
			return (-1);
		main = main->next;
		i++;
	}

	now_node = main->next;
	main->next = now_node->next;
	free(now_node);

	return (1);
}
