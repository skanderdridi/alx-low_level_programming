#include <main.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	char c = 'a';
	
	while(c <= 'z')  
    {  
        _putchar(c);  
        c++; 
    }
		_putchar('\n');

}
