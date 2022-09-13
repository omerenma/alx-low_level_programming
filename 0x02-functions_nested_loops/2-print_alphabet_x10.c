#include "main.h"
/**
 * main - Entry point
 * Description: Print ten timesthe alphabet in lowercase
 * Return: Always 0 (Success)
*/
void main(void)
{
	char i;
	char j;
	

	for (j = 0; j <= 10; j++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
			_putchar('\n');
		}
	}

}
