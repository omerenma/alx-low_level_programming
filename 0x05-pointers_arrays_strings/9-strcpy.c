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
	char *aux = dest;

	while (*src)
		*dest++ = *src++;

	return (aux);

}

