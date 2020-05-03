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
/**
 * insert_dnodeint_at_index - insert a node at index
 * @h: head of the linked list
 * @idx: index to return
 * @n: value
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count = 0;
	dlistint_t *temp = *h, *newnode = NULL;
	size_t l = dlistint_len(temp);

	if (idx > l)
		return (NULL);
	if (h == NULL || *h == NULL)
		return (NULL);
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	if (idx == 0)
	{
		newnode = add_dnodeint(h, n);
		return (newnode);
	}
	if (idx > 0)
	{
		while (temp)
		{
			if (temp->next != NULL && count == idx)
			{
				(temp->prev)->next = newnode;
				newnode->prev = temp->prev;
				(temp->next)->prev = newnode;
				newnode->next = temp;
				return (newnode);
			}
			if (temp->next == NULL && count == idx)
			{
				newnode->prev = temp->prev;
				(temp->prev)->next = newnode;
				newnode->next = temp;
				return (newnode);
			}
			count++;
			temp = temp->next;
		}
		free(newnode);
	}
	return (NULL);
}
