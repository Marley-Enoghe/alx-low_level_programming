#include "lists.h"
/**
 * listint_len - returns the number of elements in a linked listint_t
 * @h: node
 * Return: returns the number of elements in the list
 */
size_t listint_len(const listint_t *h)
{
	size_t now_num;

	now_num = 0;
	while (h != NULL)
	{
		h = h->next;
		now_num++;
	}
	return (now_num);
}
