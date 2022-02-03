/*
 * File: 4-puts.c
 * Auth: skander dridi <4402@holbertonschool.com>
 */

#include <stdio.h>

/**
 * main - Prints with proper grammar, but the outcome is a piece of art,
 *                
 *
 * Return: Always 0.
 */
int main(void)
{
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));

	return (0);
}
