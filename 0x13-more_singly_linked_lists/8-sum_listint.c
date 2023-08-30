#include "lists.h"
/**
 * sum_ listint -  a function that returns the
 * sum of all the data (n) of a listint_t linked list.
 * @head: pointer to head of listint_t list.
 * Return: number of elements in listint_t list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
