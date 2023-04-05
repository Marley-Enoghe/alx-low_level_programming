#include "lists.h"
/**
 * pop_listint - delete the head node of a linked list
 * @head: A pointer to the to the first data in the linked list
 *
 * Return: the head node's data that was deleted,
 * or 0 if the list has nothing
 */
int pop_listint(listint_t **head)
{
		listint_t *vari;
	int main;

	if (!head || !*head)
		return (0);

	main = (*head)->n;
	vari = (*head)->next;
	free(*head);
	*head = vari;

	return (main);
}
