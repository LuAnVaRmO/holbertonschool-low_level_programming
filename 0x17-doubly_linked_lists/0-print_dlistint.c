#include "lists.h"
/**
 * print_dlistint - Print size of nodes
 * @h: head of the list
 * Return: NUmber of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	dlistint_t *node;

	node = (dlistint_t *)h;

	while (node)
	{
		printf("%d\n", node->n);
		count++;
		node = node->next;
	}
	return (count);
}
