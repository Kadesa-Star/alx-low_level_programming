#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_dog - a function that prints structure dog
 * @d: pointer to structure
 *
 * Description: if an element of d is null the funtion prints nil
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name:%s\nAge:%f\nOwner:%s\n", d->name, d->age, d->owner);
}
