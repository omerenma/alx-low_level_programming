#include <stdio.h>
#include "main.h"
/**
 * main -Entry point
 * Description: Print alphabet in lowercase
 * Return: Always 0 (Success) 
 */
int main(void)
{
	char i;
	for (i = 'a'; i <= 'z'; i++)
	{
		printf(i);
		printf('\n');
	}
	return (0);

}
