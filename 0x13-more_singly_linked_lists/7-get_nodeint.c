#include "lists.h"
/**
 * get_nodeint_at_index - get the value of a node
 * @head: listint_t of integers
 * @index: the node that we are looking for
 * Description: get and print the value of the node index
 * Return: the value, or null if fail
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
