#include "dog.h"
#include <stdlib.h>

char *_strcopy(char *dest, char *src);
/**
 * *new_dog - func
 * @name: param
 * @age: param
 * @owner: param
 * Return: struct pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *strt;
	unsigned int i, j;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	strt = malloc(sizeof(dog_t));

	if (!strt)
		return (NULL);

	i = 0;
	while (name[i])
		i++;

	j = 0;
	while (owner[j])
		j++;

	(*strt).name = malloc(sizeof(char) * (i + 1));
	if ((*strt).name == NULL)
	{
		free((*strt).name);
		free(strt);
		return (NULL);
	}

	(*strt).owner = malloc(sizeof(char) * (j + 1));
	if ((*strt).owner == NULL)
	{
		free((*strt).owner);
		free(strt);
		return (NULL);
	}

	(*strt).name = _strcopy((*strt).name, name);
	(*strt).age = age;
	(*strt).owner = _strcopy((*strt).owner, owner);

	return (strt);
}

/**
 * *_strcopy - func
 * @dest: param
 * @src: param
 * Return: char *
 */
char *_strcopy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i]; i++)
		dest[i] = src[i];
	dest[i] = '\0';

	return (dest);
}
