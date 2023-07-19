#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog.
 * @name: pointer to new dog name.
 * @age: new dog age.
 * @owner: new dog owner.
 *
 * Return: returns pointer to newly created dog.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int i, j, k;
	dog_t *dog_n;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog_n = malloc(sizeof(dog_t));
	if (dog_n == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		;
	i++;
	dog_n->name = malloc(i * sizeof(char));
	if (dog_n->name == NULL)
	{
		free(dog_n);
		return (NULL);
	}
	for (j = 0; j < i; j++)
		dog_n->name[j] = name[j];
	dog_n->age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	dog_n->owner = malloc(k * sizeof(char));
	if (dog_n == NULL)
	{
		free(dog_n->name);
		free(dog_n);
		return (NULL);
	}
	for (j = 0; j < k; j++)
		dog_n->owner[j] = owner[j];
	return (dog_n);
}
