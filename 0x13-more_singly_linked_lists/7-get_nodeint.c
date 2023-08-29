#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns
 * the nth node of a listint_t linked list.
 * @head: pointer to the listint_t.
 * @index: integer argument for node to be returned.
 * Return: nth node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *temp;
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = head->next;
	while (i <= index)
	{
		i++;
		if (i == index && temp->next == NULL)
		{
			return (NULL);
		}
		temp = temp->next;
	}
	return (temp);
}
