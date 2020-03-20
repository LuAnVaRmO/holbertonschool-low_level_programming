#include "lists.h"
/**
 * free_list - add node
 * @head: pointer of a singly linked list
 * Description: add a node at the start of the list
 * Return: number of nodes
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
