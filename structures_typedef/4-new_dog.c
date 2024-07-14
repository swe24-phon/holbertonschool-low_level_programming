#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * string_length - calculate the string length
 * @str: string
 *
 * Return: length
 */

int string_length(char *str)
{
	int length = 0;

	while (str[length] != '\0')
	{
		length++;
	}
	return (length);
}

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
	int name_length, owner_length, i;

	new_dog = malloc(sizeof(dog_t));

if (new_dog == NULL)
{
	return (NULL);
}
name_length = string_length(name);
new_dog->name = malloc(name_length + 1);
if (new_dog->name == NULL)
{
	free(new_dog);
	return (NULL);
}
for (i = 0; i <= name_length; i++)
{
	new_dog->name[i] = name[i];
}

owner_length = string_length(owner);
new_dog->owner = malloc(owner_length + 1);
if (new_dog->owner == NULL)
{
	free(new_dog->name);
	free(new_dog);
	return (NULL);
}
for (i = 0; i <= owner_length; i++)
{
	new_dog->owner[i] = owner[i];
}
new_dog->age = age;
return (new_dog);
}
