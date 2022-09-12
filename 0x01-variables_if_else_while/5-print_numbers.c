#include <stdio.h>
/**
* main - Entry point
* Descrition: C program that prints numbers
* Return: Always 0 (Success)
*/
int main()
{
	int num = 0;

	while (num <= 9)
	{
		printf("%i", num);
		++num;
	}
	printf("\n");
	return (0);
}
