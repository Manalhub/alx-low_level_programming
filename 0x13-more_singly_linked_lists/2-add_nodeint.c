#include "lists.h"

/**
 * add_nodeint - adds a new node at the Top of a linked list
 * @head: pointer to the first node in list
 * @n: value to insert in new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n_node;

	n_node = malloc(sizeof(listint_t));

	if (!n_node || !head)
		return (NULL);

	n_node->next = NULL;
	n8NODE->n = n;
	if (*head)
		n_node->next = *head
	* head = n_node;

	return (n_node);
}
