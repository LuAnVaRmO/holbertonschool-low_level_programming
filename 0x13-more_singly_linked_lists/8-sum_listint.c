#include "lists.h"
/**
 * sum_listint - add all the values of a nodes
 * @head: listint_t of integers
 * Description: get, add and print the values of the node
 * Return: sum, or 0 if empty
 */
int sum_listint(listint_t *head)
{
	unsigned int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
