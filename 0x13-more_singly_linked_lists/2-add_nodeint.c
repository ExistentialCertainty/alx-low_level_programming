#include "lists.h"
/**
 * add_nodeint - a function that adds a new
 * node at the beginning of a listint_t list.
 * @head: pointer to head pointer of listint_t.
 * @n: integer argument of listint_t.
 * Return: address of the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (!new)
	{
		return (NULL);
	}
	new->next = *head;
	new->n = n;
	(*head) = new;
	return (new);
}
