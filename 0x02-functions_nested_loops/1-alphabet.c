#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 * Description: Print alphabet in lowercase
 * Return: Always 0 (Success) 
 */
void main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		_putchar(i);
		_putchar('\n');
	}
}