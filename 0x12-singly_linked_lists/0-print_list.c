#include "lists.h"
/**
 * print_list - prints all the elements of a list_t list.
 * @h: name of the list
 * Return: to size_t.
 */
size_t print_list(const list_t *h)
{
	size_t i;

	for (i = 0; h; i++)
	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
	}
	return (i);
}
