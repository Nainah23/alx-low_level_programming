#include "lists.h"

/**
 * get_nodeint_at_index - produces the node at a given index in a list
 * @head: first node in the linked list
 * @index: node index to be returned
 *
 * Return: A pointer to the node we're in pursuit for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
