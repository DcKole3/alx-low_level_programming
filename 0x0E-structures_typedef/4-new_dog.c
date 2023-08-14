#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: dogs age
 * @owner: dogs owner
 * Return: a dogs detail
 */
dog_t *new_dog(char *name, float age, char *owner)
{
int i;
int len1;
int len2;
dog_t *newdog;
char *c;
char *b;
len1 = 0;
for (i = 0; name[i] != '\0'; i++)
len1++;
len2 = 0;
for (i = 0; owner[i] != '\0'; i++)
len2++;
newdog = malloc(sizeof(dog_t));
if (newdog == NULL)
return (NULL);
c = malloc(sizeof(char) * (len1 + 1));
if (c == NULL)
{
free(newdog);
return (NULL);
}
for (i = 0; i < len1; i++)
c[i] = name[i];
c[i] = '\0';
newdog->name = c;
newdog->age = age;
b = malloc(sizeof(char) * (len2 + 1));
if (b == NULL)
{
free(c);
free(newdog);
return (NULL);
}
for (i = 0; i < len2; i++)
b[i] = owner[i];
b[i] = '\0';
newdog->owner = b;
return (newdog);
}
