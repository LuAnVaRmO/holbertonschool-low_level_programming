#include "lists.h"
/**
 * pop_listint - delete the head node of a list
 * @head: pointer of a singly linked list
 * Description: add a node at the start of the list
 * Return: head node's data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *rem;
	int nd;

	if (head == NULL || *head == NULL)
		return (0);
	rem = *head;
	*head = rem->next;
	nd = rem->n;
	free(rem);
	return (nd);
}
