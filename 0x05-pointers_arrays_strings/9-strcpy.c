#include "main.h"

/**
 * _strcpy -  a function that copies the string pointed to by src
 *
 * @src: char type string
 * @dest: char type string
 *
 * Return: Pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int p = -1;

	do {
		p++;
		dest[p] = src[p];
	} while (src[p] != '\0');

	return (dest);
}
