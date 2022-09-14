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
	char s;
	int result = 0;

	for (s = 0; s <= 45; s++)
	{
		if (n > s)
			return 1;
			printf("+\n");
		else if (n == s)
			return 0;
			printf("0\n");
		else if (n < s)
			return -1;
			printf("-\n");
	}
	return (result);
}
