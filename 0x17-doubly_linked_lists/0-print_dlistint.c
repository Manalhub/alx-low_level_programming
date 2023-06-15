#include "lists.h"

typedef struct dlistint_s {
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *current = h;
	size_t count = 0;

	while (current != NULL) 
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}

	return count;
}
