#include "lists.h"

/**
 * listint_len - prints all the elements of a list
 * @h: pointer of a singly linked list
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t count;

	for (count = 0; h; count++)
	{
		h = h->next;
	}
	return (count);
}
