#include "lists.h"
/**
 * get_dnodeint_at_index - get the value of the list
 * @head: head of the linked list
 * @index: index to return
 * Return: the value of the list
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp = head;

	while (head)
	{
		if (count == index)
			return (temp);
		count++;
		temp = temp->next;
	}
	return (0);
}
