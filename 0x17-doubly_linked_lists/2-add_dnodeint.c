#include "lists.h"
/**
 * add_dnodeint - add new node
 * @head: head of the linked list
 * @n: element to add
 * Return: pointer to new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	newnode->prev = NULL;
	newnode->next = *head;
	(*head)->prev = newnode;
	*head = newnode;
	return (newnode);
}
