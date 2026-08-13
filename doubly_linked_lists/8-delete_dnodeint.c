#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a given index
 * @head: pointer to the first node
 * @index: index of the node to delete
 *
 * Return: 1 if succeeded, -1 if failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int count;

	if (head == NULL || *head == NULL)
		return (-1);

	current = *head;
	count = 0;

	while (current != NULL)
	{
		if (count == index)
		{
			if (current->prev != NULL)
				current->prev->next = current->next;
			else
				*head = current->next;

			if (current->next != NULL)
				current->next->prev = current->prev;

			free(current);
			return (1);
		}

		count++;
		current = current->next;
	}

	return (-1);
}
