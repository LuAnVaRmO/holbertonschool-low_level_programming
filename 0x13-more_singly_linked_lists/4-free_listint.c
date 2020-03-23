#include "lists.h"
/**
 * free_listint - free the memory
 * @head: pointer of a singly linked list
 * Description: free a node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *next;

	while (head)
	{
		next = head->next;
		free(head);
		head = next;
	}
}
