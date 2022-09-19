#include "main.h"
/**
 * _strcpy - Copy string point
 * Description: Copy string pointer to by src, including the terminating null byte (\0)
 * @dest: A pointer to destination of string
 * @src: Apointer to source string to copy from
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, b = 0;

	for (a = 0; src[a] != '\0'; ++a)
	{
		dest[b] = src[a];
		++b;
	}
	dest[b] = '\0';

	return (dest);

}

