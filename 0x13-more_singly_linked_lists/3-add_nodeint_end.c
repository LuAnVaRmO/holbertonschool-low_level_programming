#include "lists.h"
/**
 * add_nodeint_end - add node
 * @head: pointer of a singly linked list
 * @n: int to add
 * Description: add a node at the start of the list
 * Return: number of nodes
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add, *temp;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);
	add->n = n;
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (add);
}
