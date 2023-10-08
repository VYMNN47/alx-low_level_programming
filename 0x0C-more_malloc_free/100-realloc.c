#include "main.h"

/**
 * *_realloc - a function that reallocates a memory block using malloc and free
 *
 * @old_size: size in bytes before
 * @new_size: size in bytes of the new memory block
 * @ptr: pointer to memory
 *
 * Return: NULL if new_size = 0 and ptr is not NULL
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *c;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		return (c);
	}
	if (new_size > old_size)
	{
		c = malloc(new_size);
		if (c == NULL)
			return (NULL);
		for (a = 0; a < old_size && a < new_size; a++)
			*((char *)c + a) = *((char *)ptr + a);
		free(ptr);
	}
	return (c);
}
