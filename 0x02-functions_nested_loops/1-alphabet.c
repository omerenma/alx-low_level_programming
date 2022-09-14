#include "main.h"
/**
 * main - Entry point
 * Description: print_alphabet - utilizes on the _putchar function to print the alphabet a - z
 * Return: Always 0 (Success)
*/
void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
	_putchar(i);
_putchar('\n');
}
