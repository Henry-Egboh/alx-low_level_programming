#include "lists.h"

/**
 * pop_listint - delete head node
 * @head: link list
 * Return: return head node
 */

int pop_listint(listint_t **head)
{
	int header;
	listint_t *h;
	listint_t *del;

	if (*head == NULL)
	return (0);
	del = *head;
	header = del->n;
	h = del->next;
	free(del);
	*head = h;
	return (header);
}
