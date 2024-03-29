#include "lists.h"
/**
 * get_nodeint_at_index - returns the nth node of a linked list
 * @head: 1st node in the linked list
 * @index: index of node to be returned
 *
 * Return: nth node of a linked list, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index){
	unsigned int i;
	i = 0;

	if (head == NULL)
		return (NULL);

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);

}
