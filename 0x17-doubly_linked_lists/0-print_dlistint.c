#include "lists.h"

/**
 * print_dlistint - prints all the elements of a linked list
 * @h: linked list of type listint_t to print
 *
 * Return: number of nodes
 **/

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *node = h;
	size_t num = 0;

	while (node)

	{
		printf("%i\n", node->n);
		num++;
		node = node->next;
	}

	return (num);
}
