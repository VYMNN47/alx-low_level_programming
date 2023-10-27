#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian , 1 for small
*/

int get_endianness(void)
{
	unsigned int i = 1;
	
	return (*(char *)&i);
}
