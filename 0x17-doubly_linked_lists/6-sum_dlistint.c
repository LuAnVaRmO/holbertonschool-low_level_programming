#include "lists.h"
/**
 * sum_dlistint - add all the value of the lists
 * @head: head of the list
 * Return: the value of the add
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0, i = 0;

	if (head == NULL)
		return (0);
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
		i++;
	}
	return (sum);
}
