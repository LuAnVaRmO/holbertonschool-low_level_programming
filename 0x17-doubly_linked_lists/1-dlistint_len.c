#include "lists.h"
/**
 * dlistint_len - Print size of nodes
 * @h: head of the list
 * Return: NUmber of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *node;

	node = (dlistint_t *)h;
	while (node)
	{
		node = node->next;
		count++;
	}
	return (count);
}
