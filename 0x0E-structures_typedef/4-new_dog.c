#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - func that gets the length of str
 *
 * @str: the string that gets the length
 *
 * Return: length of @str
*/

int _strlen(const char *str)
{
	int len = 0;

	while (*str++)
		len++;
	return (len);
}

/**
 * _strcopy - func that copys a string
 *
 * @src: str to copy
 * @dest: copy str to here
 *
 * Return: @dest
*/

char *_strcopy(char *dest, char *src)
{
	int w;

	for (w = 0; src[w]; w++)
		dest[w] = src[w];
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: NULL if the function fails
*/

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (NULL);

	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if ((*dog).name == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
