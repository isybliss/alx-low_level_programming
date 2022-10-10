#include <stdio.h>
#include <stdlib.h>
#include "dog.h"


int _strlen(char *str);
char *_strcpy(char *dest, char *src);
/**
 * new_dog - function that creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 *
 * Return: new_dog or NULL
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *my_dog;
	int name_l = 0, owner_l = 0;

	my_dog = malloc(sizeof(dog_t));
	if (my_dog == NULL)
		return (NULL);

	name_l = _strlen(name) + 1;
	my_dog->name = malloc(sizeof(char) * name_l);

	if (my_dog->name == NULL)
	{
		free(my_dog);
		return (NULL);
	}

	owner_l = _strlen(owner);
	my_dog->owner = malloc(sizeof(char) * owner_l);
	if (my_dog->owner == NULL)
	{
		free(my_dog);
		free(my_dog->name);
		return (NULL);
	}

	my_dog->name = _strcpy(my_dog->name, name);
	my_dog->owner = _strcpy(my_dog->owner, owner);
	my_dog->age = age;

	return (my_dog);
}

/**
 * _strlen - return length of string
 * @s: string to count
 *
 * Return: string length
 */

int _strlen(char *s)
{
	int c = 0;

	for (; *s != '\0'; s++)
		c++;
	return (c);
}

/**
 * _strcpy - copy a string
 * @dest: destination string
 * @src: source string
 *
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	dest[i++] = '\0';

	return (dest);
}
