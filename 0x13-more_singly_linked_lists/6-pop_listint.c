#include "lists.h"
/**
* pop_listint -  a function that deletes the
* head node of a listint_t linked list, and
* returns the head node’s data (n).
* @head: pointer to head node pointer
* Return: the integer value of the head node.
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int g;

	if (*head == NULL)
	{
		return (0);
	}
	g = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;
	return (g);
}
