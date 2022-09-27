#include "main."
/**
 * _memcpy - function that copy memory area
 * @dest: memory are destination to copy
 * @src: memory are source to copy from
 * @n: number of bytes
 * Return: returns pointer to copy location
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
