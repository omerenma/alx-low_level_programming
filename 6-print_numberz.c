#include <stdio.>
/**
 * main - Entry point
 * Description: C program that prints numbers in base ten
 * Return: Always 0 (Success)
*/
int maint(void)
{
	int num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);
}
