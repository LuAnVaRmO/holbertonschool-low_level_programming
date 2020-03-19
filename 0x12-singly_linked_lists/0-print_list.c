#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer of a singly linked list
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t count;
	char *s = "(nil)";
	int l = 0;

	for (count = 0; h; count++)
	{
		if (h->str != NULL)
		{
			s = h->str;
			l = h->len;
		}
		printf("[%d] %s\n", l, s);
		h = h->next;
	}
	return (count);
}
