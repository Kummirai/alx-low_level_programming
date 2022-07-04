#include "dog.h"
#include <string.h>

/**
 * new_dog - function creates a new dog
 * @name: name member of the dog
 * @age: age member of the dog
 * @owner: owner member of the dog
 *
 * Return: pointer to the new dog_t
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	char *new_name;
	char *new_owner;
	dog_t *new_dogg;

	new_name = malloc(sizeof(*name) * (strlen(name) + 1));
	new_owner = malloc(sizeof(*owner) * (strlen(owner) + 1));
	new_dogg = malloc(sizeof(dog_t));

	if (new_name && new_owner && new_dogg)
	{
		strcpy(new_name, name);
		strcpy(new_owner, owner);
		new_dogg->name = new_name;
		new_dogg->age = age;
		new_dogg->owner = new_owner;
	}
	else
	{
		free(new_name);
		free(new_owner);
		free(new_dogg);
		return (NULL);
	}
	return (new_dogg);
}
