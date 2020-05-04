#include "lists.h"
/**
 * delete_dnodeint_at_index - delete a node at index
 * @head: head of the linked list
 * @index: index to return
 * Return: 1 if succes, -1 if error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *elim = *head;

	if (head == NULL || *head == NULL)
		return (-1);
	while (elim)
	{
		if (count == index)
		{
			if (elim->next)
				(elim->next)->prev = elim->prev;
			if (elim->prev)
				(elim->prev)->next = elim->next;
			if (elim == *head)
				*head = elim->next;
			free(elim);
			return (1);
		}
		count++;
		elim = elim->next;
	}
	return (-1);
}
