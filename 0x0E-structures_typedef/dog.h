#ifndef DOG_H
#define DOG_H

/**
 * struct dog- structure for dog
 *
 * @name: character data type of name
 * @age: integer data type of age
 * @owner: character data type for owner
 *
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

#endif
