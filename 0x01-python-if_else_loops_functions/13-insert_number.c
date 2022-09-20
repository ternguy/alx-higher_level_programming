#include "lists.h"
#include <stdlib.h>

/**
 * insert_node - insert a number into a sorted linked list 
 * @head: a pointer the head of a linked ist
 * @number: a number to insert
 * return: 0 if the function fail or pointer to the new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = number;
	
	if (node == NULL || new->n >= number)
	{
		new->next = node;
		*head = new;
		return (new);
	}
	while (node && node->next && node->next->n < number)
		node = node->next;
	new->next = node->next;
	node->next = new;
	return (new);
}
