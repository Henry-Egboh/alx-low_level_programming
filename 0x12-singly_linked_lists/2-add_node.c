#include "lists.h"

/**
 * add_node - print a new node
 * @head: head of the link list
 * @str: str arguments
 * Return: value
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t nchar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
	;
	new->len = nchar;
	new->next = *head;
	*head = new;
	return (*head);
}
