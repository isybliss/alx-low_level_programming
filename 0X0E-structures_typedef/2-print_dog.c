#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - prints the structure of a dog
 * @d: structure of dog
 *
 * Description: if the element of d is null, print nil
 * if d is null, print nothing
 * Return: nothing
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", d->name? d->name: "(nil)");
		printf("Age: %6f\n", d->age? d->age: 0);
		printf("Owner: %s\n", d->owner? d->owner: "(nil)");
	}
}
