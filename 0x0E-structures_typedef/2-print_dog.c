#include "main.c"
#include <stdio.h>

/**
 * print_dog - writes out the element of a dog in STDOUT if not null
 * @d: pointer to dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		return;
	if (d->name == NULL || d->age == NULL || d->owner == NULL)
		printf("nil");
	printf("Name : %s\n", d->name);
	printf("Age : %s\n", d->age);
	printf("Owner : %s\n", d->owner);
}
