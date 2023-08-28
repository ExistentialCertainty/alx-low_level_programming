#include "lists.h"
/**
 * add_node - a function that adds a new node at the beginning
 * of a list_t list
 * @head: pointer to the head pointer
 * @str: pointer to the string
 * Return: address to new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
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
	new_node->next = *head;
	*head = new_node;
	return (*head);
}
