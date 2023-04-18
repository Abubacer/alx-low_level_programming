#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strlen - a function that returns a length of string
 * @str: the string input
 * Return: the length of str
 */

int _strlen(char *str)
{
	int i;

	i = 0;

	while (str[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * _strcpy - a function that copies the src string
 * to the dest buffer
 * @dest: the string destination
 * @src: the string source
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0 ; src[i] ; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';

	return (dest);
}

/**
 * new_dog - a function that creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner name
 * Return: a pointer to the new dog
 * NULL if the function fails
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	if (!name || age < 0 || !owner)
		return (0);

	dog = malloc(sizeof(dog_t));

	if (dog == 0)
		return (0);

	dog->name = malloc(sizeof(char) * (_strlen(name) + 1));

	if (dog->name == 0)
	{
		free(dog);
		return (0);
	}

	dog->owner = malloc(sizeof(char) * (_strlen(owner) + 1));

	if (dog->owner == 0)
	{
		free(dog);
		free(dog->name);
		return (0);
	}

	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
