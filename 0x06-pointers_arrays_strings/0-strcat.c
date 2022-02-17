#include "main.h"

/**
 * _strcat - Concatenate a string to another string
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Destination string as a pointer
 */
char *_strcat(char *dest, char *src)
{
    int i,j;
	i = 0;
	j = 0;
    while (dest[i] != '\0')
		{
			i++;
		}
	while (src[j] != '\0')
		{
			j++;
		}
		dest[i+j] = '\0';
    return dest;
}
