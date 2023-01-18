#include "dog,h"
#include <stlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int j, k, l;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (j = 0; name[j]; j++)
		;
	j++;
	dog->name = malloc(j * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (l = 0; l < j; l++)
		dog->name[l] = name[l];
	dog->age = age;
	for (k = 0; owner[k]; k++)
		;
	k++;
	dog->owner = malloc(k * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (l = 0; l < k; l++)
		dog->owner[l] = owner[l];
	return (dog);
}
