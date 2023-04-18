#include "dog.h"
#include <stdio.h>

/**
 * print_dog - a function that prints a struct dog
 * @d: dog's data to print
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == 0)
		return;

	if (d->name == 0)
		d->name = "(nil)";

	if (d->owner == 0)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);

}
