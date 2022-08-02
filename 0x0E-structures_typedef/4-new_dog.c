#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: value of name
 * @age: value of age
 * @owner: value of owner
 * Return: pointer to the new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	char *name_d, owner_d;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);

	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	d = malloc(sizeof(dog_t));

	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	name_d = malloc(name_len + 1);
	if (name_d == NULL)
		return (NULL);
	for (i = 0; name[i]; i++)
		name_d[i] = name[i];
	name_d[i] = '\0';
	owner_d = malloc(owner_len + 1);
	if (owner_d == NULL)
		return (NULL);
	for (i = 0; owner[i]; i++)
		owner_d[i] = owner[i];
	owner_d[i] = '\0';
	d->name = name_d;
	d->age = age;
	d->owner = owner_d;
	return (d);

}
