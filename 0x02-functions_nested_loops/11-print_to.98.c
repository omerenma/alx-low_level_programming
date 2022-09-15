#include "main.h"
/**
 * print_to_98 - prints number upto 98
 * @n: Integer
 * Description: Prints all natural numeber
 * Return: void
 *
 */
void print_to_98(int n)
{
	if(n <= 98)
	{
		for (; n <= 98; n++) 
		{ 
			printf("%d", n);

			if(n == 98)
				continue;
			printf(", ");

		}
		printf("\n");
	}
	else
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);

			if(n == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
