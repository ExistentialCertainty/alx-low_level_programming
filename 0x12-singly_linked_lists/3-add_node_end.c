#include "lists.h"
/**
 * add_node_end - a function that adds a
 * new node at the end of a list_t list
 * @head: pointer to the head pointer
 * @str: pointer to the string
 * Return: address to new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *tmp;
	unsigned int str_len = 0;

	while (str[str_len])
	{
		str_len++;
	}
	new_node = malloc(sizeof(list_t));
	if (!new_node)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = str_len;
	new_node->next = NULL;
	tmp = *head;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (tmp->next)
	{
		tmp = tmp->next;
	}
	tmp->next = new_node;
	return (new_node);
}
