#include "main.h"
/**
 * *_strncpy - function that copys the string
 * @dest: string input
 * @src: input string
 * @n: input integer
 * Return: Pointer to the result strign
 */
char _strncpy(char *dest, char *src, int n)
{
	int srclen = 0; i = 0;
	char *temp = dest, *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = src++;

	return (temp);
}
