#include "main.h"

/**
 * swap_ integers - swap values
 *
 * @a: variable 1
 * @b: variable 2
 **/
void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
