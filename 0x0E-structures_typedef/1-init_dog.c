#include <stdlib.h>
#include "dog.h"
/**
 * init_dog - the funciton to initialize a variable
 * @d: pointer tostructure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: this function initailizes a variable
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
