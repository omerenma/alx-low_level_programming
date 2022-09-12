#include <stdio.h>
/**
 * main - Entry Point
 * Description: A C program that prints alphabets in lower case
 * Return: Aloway 0 (Success)
*/
int main(void)
{
	char a = 'a';


	while (a <= 'z')
	{
		putchar(a);
		++a;
	}
	putchar('\n');
	return (0);
}
