#include "lists.h"
/**
 * delete_nodeint_at_index - delete a node
 * @head: listint_t of integers
 * @index: the index to delete
 * Description: get and print the value of the node index
 * Return: the value, or null if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int count;
	listint_t *loc, *del;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		del = (*head)->next;
		free(*head);
		*head = del;
		return (1);
	}
	loc = *head;
	for (count = 0; count < index - 1; count++)
	{
		if (loc->next == NULL)
			return (-1);
		loc = loc->next;
	}
	del = loc->next;
	loc->next = del->next;
	free(del);
	return (1);
}
