#include "sort.h"

/**
 * insertion_sort_list - sorts in ascending order
 * @list: doubly linked list to sort
 *
 * Return: void
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *before, *current, *after;

	if (list == NULL)
		return;

	current = (*list)->next;
	while (current != NULL)
	{
		if (current->prev != NULL)
		{
			if (current->n < current->prev->n)
			{
				before = current->prev;
				after = current->next;
				current->prev = before->prev;
				current->next = before;

				if (current->prev != NULL)
					current->prev->next = current;
				if (current->prev == NULL)
					*list = current;

				before->prev = current;
				before->next = after;

				if (after != NULL)
					after->prev = before;

				print_list(*list);
			}
			else
				current = current->next;
		}
		else
			current = current->next;
	}
}
