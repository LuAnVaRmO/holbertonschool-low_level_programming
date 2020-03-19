#include "lists.h"
/**
 * _strlen - show length of string
 * @s: character
 * Description: Show lenght of string
 * Return: value of lenght
 */
int _strlen(char *s)
{
	int i;

	for (i = 0 ; s[i] != '\0' ; i++)
		;
	return (i);
}
/**
 * add_node_end - add node
 * @head: pointer of a singly linked list
 * @str: string to add
 * Description: add a node at the start of the list
 * Return: number of nodes
 */
list_t *add_node_end(list_t **head, const char *str)
{
	char *s;
	list_t *add, *temp;

	if (str == NULL || head == NULL)
		return (NULL);
	add = malloc(sizeof(list_t));
	if (add == NULL)
		return (NULL);
	s = strdup(str);
	if (s == NULL)
	{
		free(add);
		return (NULL);
	}
	add->str = s;
	add->len = _strlen(s);
	add->next = NULL;
	if (*head == NULL)
	{
		*head = add;
		return (add);
	}
	temp = *head;
	while (temp->next)
		temp = temp->next;
	temp->next = add;
	return (add);
}
