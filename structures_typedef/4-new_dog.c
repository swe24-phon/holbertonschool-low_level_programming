#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - new dog struct
 * @name: The dog's name
 * @age: The dog's age
 * @owner: The dog owner's name
 *
 * Return: new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
