#include <stdio.h>
/**
 * main - Entry point
 * Description: C program that prints number in base ten
 * Return: Always 0 (Success)
*/
int main(void)
{
	num = 0;

	while (num <= 9)
	{
		putchar(num + '0');
		++num;
	}
	putchar('\n');
	return (0);

}
