#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
 * _strlen - checks length of string
 * @str: String
 * Return: Length
 */
unsigned int _strlen(char *str)
{
unsigned int y;

for (y = 0; str[y]; y++)
	;
return (y);
}

/**
 * add_node_end - adds new node at the end of linked list
 * @head: double pointer to linked list
 * @str: String to add new node
 * Return: length of string
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *tmp;

	if (str == NULL)
	return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
	return (NULL);
	new->str = strdup(str);
	if (new->str == NULL)
	{
	free(new);
	return (NULL);
	}
	new->len = _strlen(new->str);
	new->next = NULL;
	if (*head == NULL)
	{
	*head = new;
	return (new);
	}
	tmp = *head;
	while (tmp->next)
	tmp = tmp->next;
	tmp->next = new;
	return (new);
}

