#include "lists.h"

/**
 * free_dlistint - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_dlistint(listint_t *head)
{
	listint_t *temp;

	while ((temp = head) != NULL)
	{
		head = head->next;
		free(temp);
	}
}
