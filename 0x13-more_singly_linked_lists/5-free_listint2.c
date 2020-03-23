#include "lists.h"
/**
 * free_listint2 - free the memory
 * @head: pointer of a singly linked list
 * Description: free a node
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *next;

	if (head == NULL)
		return;
	while (*head)
	{
		next = (*head)->next;
		free(*head);
		*head = next;
	}
}
