#include "lists.h"

/**
 * add_nodeint - add a node
 * @head: link list
 * @n: integer
 * Return: a value head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (*head);
}
