#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - Print numbers.
 *
 * @n: number of arguments
 * @separator: String
 *
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int c;
	va_list ap;

	va_start(ap, n);
	for (c = 0; c < n; c++)
	{
		printf("%d", va_arg(ap, int));
		if (c < n - 1 && separator)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
