#include "lists.h"

/**
 * dlistint_len - The returned  number of elements in
 * a double linked list
 *
 * @h: The head of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
