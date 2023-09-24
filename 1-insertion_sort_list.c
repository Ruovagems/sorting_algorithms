#include "sort.h"

/**
 * insertion_sort_list - Sorts a DLL of integers in ascending order
 *                       using the insertion sort algorithm
 *
 * @list: Double pointer to the head of the doubly linked list
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *current = (*list)->next;

	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;


	while (current != NULL)
	{
		listint_t *temp = current;

		while (temp->prev != NULL && temp->n < temp->prev->n)
		{
			if (temp->next != NULL)
				temp->next->prev = temp->prev;

			temp->prev->next = temp->next;
			temp->next = temp->prev;
			temp->prev = temp->prev->prev;

			if (temp->prev != NULL)
				temp->prev->next = temp;
			else
				*list = temp;

			temp->next->prev = temp;

			temp = temp->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
