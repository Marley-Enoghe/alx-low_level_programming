#include "lists.h"
/**
 * print_listint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int first_node = 0;

	while (h != NULL)
	{
		first_node++;
		printf("%d\n", h->n);

		h = h->next;
	}

	return (first_node);

}
