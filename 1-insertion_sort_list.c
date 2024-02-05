#include "sort.h"
/**
 * insertion_sort_list - sorts a doubly linked list
 * @list: a doubly linked list
 * Return: void
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *cur, *next, *prev;

	if ((!*list || (!(*list)->next)))
		return;

	cur = (*list)->next;
	while (cur)
	{
		next = cur->next;

		while ((cur->prev) && cur->prev->n > cur->n)
		{
			prev = cur->prev;
			if (cur->next)
				cur->next->prev = prev;

			prev->next = cur->next;
			cur->next = prev;
			cur->prev = prev->prev;

			if (prev->prev)
				prev->prev->next = cur;

			prev->prev = cur;

			if (!cur->prev)
				*list = cur;

			print_list(*list);
		}

		cur = next;
	}
}
