#include "dog.h"
#include <stdlib.h>

/**
* init_dog- initialize a variable dog
* @d: struct dog variable
* @name: char of dog name
* @age: float of dog age
* @owner: char of dog owner
*
*/

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;
	d.name = name;
	d.age = age;
	d.owner = owner;
}
