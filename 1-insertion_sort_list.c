#include <stdio.h>
#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of integers
 * using the insertion sort algorithm in ascending order
 * @list: pointer to the head of the list
 */

void print_list(const listint_t *list);
void insertion_sort_list(listint_t **list)
{
	if (list == NULL || *list == NULL || (*list)->next == NULL)
		return;

	listint_t *current = (*list)->next;

	while (current != NULL)
	{
		listint_t *temp = current->prev;

		while (temp != NULL && temp->n > current->n)
		{
			if (current->next != NULL)
				current->next->prev = temp;

			temp->next = current->next;
			current->prev = temp->prev;
			current->next = temp;
			if (temp->prev != NULL)
				temp->prev->next = current;
			else
				*list = current;
			temp->prev = current;
			temp = current->prev;
			print_list(*list);
		}
		current = current->next;
	}
}
