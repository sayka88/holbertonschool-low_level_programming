#include "lists.h"

/**
* delete_dnodeint_at_index - Deletes the node at index index of a dlistint_t linked list.
* @head: Pointer to a pointer to the head of the list.
* @index: Index of the node that should be deleted.
*
* Return: 1 if it succeeded, -1 if it failed.
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current_node, *temp_node;
	unsigned int i;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		temp_node = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp_node);
		return (1);
	}

	current_node = *head;
	for (i = 0; current_node != NULL && i < index - 1; i++)
		current_node = current_node->next;

	if (current_node == NULL || current_node->next == NULL)
		return (-1);

	temp_node = current_node->next;
	current_node->next = temp_node->next;
	if (temp_node->next != NULL)
		temp_node->next->prev = current_node;
	free(temp_node);
	return (1);
}
