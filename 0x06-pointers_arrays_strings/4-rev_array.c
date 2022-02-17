#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverse string
 * @a: check the string
 * @n: number the elements
 *
 */
void reverse_array(int *a, int n)
{
	int c;
	int x;
	int new;

	for (c = 0, x = n - 1; c < x; c++, x--)
	{
		new = a[c];
		a[c] = a[x];
		a[x] = new;

	}

}
