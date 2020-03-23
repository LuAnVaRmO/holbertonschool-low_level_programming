#include "lists.h"

/**
 * print_listint - prints all the elements of a list of integers
 * @h: pointer of a singly linked list
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
