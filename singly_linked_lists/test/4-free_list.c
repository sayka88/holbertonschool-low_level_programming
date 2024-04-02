#include "lists.h"
#include <stdlib.h>

/**
* free_list - Frees a list_t list
* @head: Pointer to the head of the list
*/
void free_list(list_t *head)
{
	list_t *current;
	list_t *temp;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current->str);
		free(current);
		current = temp;
	}
}
