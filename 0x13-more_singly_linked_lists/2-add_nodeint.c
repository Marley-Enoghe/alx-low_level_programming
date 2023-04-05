#include "lists.h"
/**
 * add_nodeint - adds a node to the beginning of a linked list
 * @head: linked list
 * @n: value of int n
 *
 * Return: address or pointer of the new element or NULL
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *dee_Node;

	dee_Node = malloc(sizeof(listint_t));
	if (dee_Node == NULL)
		return (NULL);
	dee_Node->n = n;
	dee_Node->next = *head;
	*head = dee_Node;
	return (*head);
}
