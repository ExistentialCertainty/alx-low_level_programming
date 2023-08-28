#include "lists.h"
/**
 * list_len - A function that returns the  number of
 * elements of a single linked list
 * @h: pointer to head of single linked lists
 * Return: size of list
 */
size_t list_len(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		h = h->next;
		node_num++;
	}
	return (node_num);
}
