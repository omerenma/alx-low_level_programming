#include <stdio.h>
/**
 * main - Entry point 
 * Description: C program that prints alphabet in new line
*/
int main(void)
{
	char l = 'a';

	while (l <= 'z')
	{
		if (l == 'e'|| l == 'q')
			++l;
		putchar(l);
		++l;
	}
	putchar('\n');
	return (0);
}
