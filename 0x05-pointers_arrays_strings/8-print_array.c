#include "main.h"
#include <stdio.h>

/**
 * print_array - print array of int
 *
 * @a: array
 * @n: number of array elements to print
 **/
void print_array(int *a, int n)
{
int i;
for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i < n - 1)
{
printf(", ");
}
}
printf("\n");
}
