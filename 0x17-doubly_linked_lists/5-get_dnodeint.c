#include "lists.h"
/**
 * get_dnodeint_at_index -Used to return the nth node of a dlistint_t linked list.
 * @head: A pointer to head of the list
 * @index: The index of the node to search for, starting from 0
 * Return: nth node or null
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int sizee;
	dlistint_t *tmp_;

	sizee = 0;
	if (head == NULL)
	return (NULL);

	tmp_ = head;
	while (tmp_)
	{
	if (index == sizee)
	return (tmp_);
	sizee++;
	tmp_ = tmp_->next;
	}
	return (NULL);
}
