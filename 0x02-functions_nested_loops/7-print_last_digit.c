#include "main.h"
/**
 * print_last_digit - Print last digit
 * @n: N is integer
 * Description: Function to print last digit
 * Return: return last digit
 *
 */
int print_last_digit(int n)
{
	int result ;
	if (n < 0)
		result = -1 * (n % 10);
	else
		result = n % 10;
	_putchar((n % 10) + '0');
	return (n % 10);

}
