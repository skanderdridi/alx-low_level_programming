#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Funcion that returns the sum of all its parameters.
 *
 * @n: Number of arguments.
 *
 * Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int c;
	va_list lista;

	while (n == 0)
	{
		return (0);
	}
	va_start(lista, n);
	for (c = 0; c < n; c++)
	{
		sum += va_arg(lista, int);
	}
	va_end(lista);
	return (sum);
}
