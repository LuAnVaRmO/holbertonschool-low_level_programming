#include "lists.h"
/**
 * reverse_listint - reverse a list
 * @head: points to start of list
 * Return: pointer to beginning of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *bef = NULL, *aft = NULL;


	while (*head)
	{
		aft = (*head)->next;
		(*head)->next = bef;
		bef = *head;
		*head = aft;
	}
	*head = bef;
	return (*head);
}
