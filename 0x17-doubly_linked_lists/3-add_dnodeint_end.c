#include "lists.h"

/**
 * add_dnodeint_end - For adding a new node at the end
 * of a dlistint_t list
 *
 * @head: A head of the list
 * @n: The value of the element
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *g;
	dlistint_t *new_;

	new_ = malloc(sizeof(dlistint_t));
	if (new_ == NULL)
		return (NULL);

	new_->n = n;
	new_->next = NULL;

	g = *head;

	if (g != NULL)
	{
		while (g->next != NULL)
			g = g->next;
		g->next = new_;
	}
	else
	{
		*head = new_;
	}

	new_->prev = g;

	return (new_);
}
