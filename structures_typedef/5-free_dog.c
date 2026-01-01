#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - frees a dog_t struct
 * @d: pointer to dog to free
 */
void free_dog(dog_t *d)
{
    if (d == NULL)
        return;

    if (d->name != NULL)
        free(d->name);
    if (d->owner != NULL)
        free(d->owner);
    free(d);
}

