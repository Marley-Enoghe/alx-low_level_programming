#include "lists.h"
/**
 * add_dnodeint - used for adding a new node at the beginning
 * of a dlistint_t list
 *
 * @head:The head of the list
 * @n: The value of the element
 * Return: The address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_;
	dlistint_t *g;

	new_ = malloc(sizeof(dlistint_t));
	if (new_ == NULL)
		return (NULL);

	new_->n = n;
	new_->prev = NULL;
	g = *head;

	if (g != NULL)
	{
		while (g->prev != NULL)
			g = g->prev;
	}

	new_->next = g;

	if (g != NULL)
		g->prev = new_;

	*head = new_;

	return (new_);
}
