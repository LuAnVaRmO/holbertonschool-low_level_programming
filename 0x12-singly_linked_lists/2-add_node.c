#include "lists.h"
/**
 * add_node - add node
 * @head: pointer of a singly linked list
 * @str: string to add
 * Description: add a node at the start of the list
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	int i, len;
	char *s;
	list_t *add;

	len = strlen(str);
	add = *head;
	add = malloc(sizeof(list_t));
	if (add == NULL)
	{
		return (NULL);
	}
	s = malloc(sizeof(char) * len + 1);
	for (i = 0; str[i]; i++)
		s[i] = str[i];
	add->len = len;
	add->str = s;
	add->next = *head;
	*head = add;
	return (add);
}
