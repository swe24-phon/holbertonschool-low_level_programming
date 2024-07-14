#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free memory
 *@d: dog to free
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->name)
		free(d->name);
	if (d->owner)
		free(d->owner);
	free(d);
}
