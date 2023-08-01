#include "lists.h"

/**
 * free_listint2 - frees a list that is linked
 * @head: It's a pointer to the list of listint_t that is to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}

	*head = NULL;
}
