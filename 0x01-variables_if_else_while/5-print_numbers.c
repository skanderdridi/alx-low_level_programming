#include <stdio.h>

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char num = '0';
	
	while(num <= '9')  
    {  
        putchar(num);  
        num++;  
    }
    putchar('\n');
	return (0);
}
