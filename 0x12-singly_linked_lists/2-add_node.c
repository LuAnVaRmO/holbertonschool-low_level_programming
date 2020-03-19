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
	int len;

	for (i = 0 ; s[len] != '\0' ; ++i)
	{
		len = i;
	}
	return (len);
}
/**
 * add_node - add node
 * @head: pointer of a singly linked list
 * @str: string to add
 * Description: add a node at the start of the list
 * Return: number of nodes
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	char *s;
	list_t *add;

	if (str == NULL)
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
	len = _strlen(s);
	add->str = s;
	add->len = len;
	add->next = *head;
	*head = add;
	return (add);
}
