#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - A function that prints all the elements of a
 * single linked list
 * @h: pointer to head of single linked lists
 * Return: printed list and node number
 */
size_t print_list(const list_t *h)
{
	size_t node_num = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] (%s)\n", h->len, h->str);
		}
		h = h->next;
		node_num++;
	}
	return (node_num);
}
