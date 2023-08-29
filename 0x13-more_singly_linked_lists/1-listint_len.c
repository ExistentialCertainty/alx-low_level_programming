#include "lists.h"
/**
 * listint_len -  a function that returns the
 * number of elements in a linked listint_t list.
 * @h: pointer to head of listint_t list.
 * Return: number of elements in listint_t list.
 */
size_t listint_len(const listint_t *h)
{
	int node_num = 0;

	while (h != NULL)
	{
		node_num++;
		h = h->next;
	}
	return (node_num);
}
