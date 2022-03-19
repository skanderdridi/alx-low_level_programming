#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a list_t list.
 * @h: name of the list
 * Return: to size_t.
 */
size_t print_list(const list_t *h)
{
	size_t error = 0;

	if (h)
	{
		if (h->str)
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		return (print_list(h->next) + 1);
	}
	else
	{
		return (error);
	}
}
