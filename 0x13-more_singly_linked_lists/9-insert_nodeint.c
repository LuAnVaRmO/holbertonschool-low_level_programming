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
	listint_t *index;
	listint_t *new;
	unsigned int count;

	if (*head == NULL)
		return (NULL);
	index = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	for (count = 0; count < (idx - 1) && index != NULL; count++)
	{
		index = index->next;
	}
	new->next = index->next;
	index->next = new;
	return (new);
}
