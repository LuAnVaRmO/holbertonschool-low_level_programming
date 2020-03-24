#include "lists.h"
/**
 * insert_nodeint_at_index - add node at specific index
 * @head: pointer of a singly linked list
 * @idx: index to insert new node
 * @n:int to add
 * Description: add a node at the index 
 * Return: number of nodes
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *add;

	if (head == NULL)
		return (NULL);
	add = malloc(sizeof(listint_t));
	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;
	return (add);
}
