#include <stdio.h>
/**
 * main - Entry point
 * Description: C prgrame to print base16
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 102)
	{
		putchar(num);
		if (num == 57)
			num += 39;
		++num;
	}
	putchar('\n');
	return (0);
}
