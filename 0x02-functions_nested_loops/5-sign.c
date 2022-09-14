#include "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n - integer
 * Description: Return 1 and prints + if if n > 0, && return 0 and prints 0 if n == 0, returns -1 and prints - if n < 0
 * Return: Always 0
 *
*/
int print_sign(int n)
{
	int result;


	if (n > 0)
	{
		result = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		result = 0;
		_putchar('-');
	}
	else 
	{
		result = -1;
		_putchar('-');
	}
	
	return (result);
}
