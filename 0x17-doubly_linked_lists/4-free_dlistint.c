#include "lists.h"
/**
 * free_dlistint - free all nodes
 * @head: head of the linked list
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr;

	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
