#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * init_dog - initialize a variable 
 * @d: dogs details
 * @name: name of dog
 * @age: dogs age
 * @owner: dogs owner name
 */
void init_dog(struct dog *d, char *name, float age,
	      char *owner)
{
if (d == NULL)
return (NULL);
d->name = name;
d->age = age;
d->owner = owner;
}
