#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strlen - return the length of a string
 * @s: the string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int j = 0;

	while (s[j] != '\0')
		j++;
	return (j);
}
/**
 * _strcpy - copies the string
 * @dest: destination
 * @src: source
 *
 * Return: a pointer to the destination
 */
char *_strcpy(char *dest, char *src)
{
	int leng, j;

	leng = 0;

	while (src[leng] != '\0')
		leng++;
	for (j = 0; j < leng; j++)
		dest[j] = src[j];
	dest[j] = '\0';

	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: the name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 *
 * Description: this is a function that creates a new dog
 * Return: NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int leng1, leng2;

	leng1 = _strlen(name);
	leng2 = _strlen(owner);

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (leng1 + 1));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * (leng2 + 1));
	if (dog->owner == NULL)
	{
		free(dog);
		free(dog->name);
		return (NULL);
	}
	_stcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}



