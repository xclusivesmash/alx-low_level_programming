#include "lists.h"
#include <stdlib.h>

/**
* free_list - frees a linked list
* @head: linked list
* Return: Nothing
*/

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head != NULL)
	{
		tmp = head;
		free(tmp->str);
		free(tmp);

		/* update head */
		head = head->next;
	}
}
