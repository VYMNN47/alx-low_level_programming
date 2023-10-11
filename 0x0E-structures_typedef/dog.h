#ifndef DOG_H
#define DOG_H

/**
 * struct dog - a struct for some dog elements
 *
 * @name: dog's name
 * @age: dog's age
 * @owner: the name of the dog's owner
 *
 * Description: just some dog info
*/

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);



#endif
