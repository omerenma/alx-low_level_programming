#include "main.h"
/**
 * main - Entry point
 * Description: print_alphabet_10 - function that prints alphabet 10 times
 * Return: Always 0 (Success)
*/

void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j <= 9; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
			_putchar(i);
		_putchar('\n');
	}

}
