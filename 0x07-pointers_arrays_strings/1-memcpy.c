#include "main.h"
/**
 * _memcpy - function that copy memory area
 * @dest: memory are destination to copy
 * @src: memory are source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}
