#include <stdio.h>
#include "lists.h"

/**
* print_list - prints elements of linked list
* @h: pointer to type list_t
* Return: #nodes
*/
size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (*(h).str != NULL)
		{
			printf("[%d] %s\n", *(h).len, *(h).str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = *(h).next;
		n += 1;
	}

	return (n);
}
