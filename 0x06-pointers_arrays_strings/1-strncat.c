#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Destination string as a pointer
 */
char *_strncat(char *dest, char *src, int n)

{
 strncat(dest, src, 1);
 return (dest);
}
