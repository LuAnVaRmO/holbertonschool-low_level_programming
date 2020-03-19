#include "lists.h"
/**
 * _strlen - show length of string
 * @s: character
 * Description: Show lenght of string
 * Return: value of lenght
 */
int _strlen(const char *s)
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
	int i, len;
	char *s;
	list_t *add;

	len = _strlen(str);
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
