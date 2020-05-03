#include "lists.h"
/**
 * add_dnodeint_end - add new node
 * @head: head of the linked list
 * @n: element to add
 * Return: pointer to new node at the end of list
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = NULL;
	dlistint_t *temp = *head;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next)
		temp = temp->next;
	newnode->prev = temp;
	newnode->next = NULL;
	temp->next = newnode;
	return (newnode);
}
