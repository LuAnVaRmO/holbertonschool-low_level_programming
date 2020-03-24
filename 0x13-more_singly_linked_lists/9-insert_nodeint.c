#include "lists.h"
/**
 * insert_nodeint_at_index - get the value of a node
 * @head: listint_t of integers
 * @idx: the index to add the new node
 * @n: value to add
 * Description: get and print the value of the node index
 * Return: the value, or null if fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count = 0;

	if (*head && head)
	{
		while (head != NULL)
		{
			if (count == idx)
				add_nodeint_end(head, n);
			count++;
			*head = head->next;
		}
		return (head);
	}
	else
	{
		return (NULL);
	}
}
