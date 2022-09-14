#include "main.h"
/**
 * _islower - C program that checks for lower
 */
int _islower(int c)
{
	char i;
	int lower = 0;

	for (i = 'a'; i <= 'z'; i++)
	{
		if(i == c)
		{
			lower = 1;
		}
		return (lower);
	}
}
