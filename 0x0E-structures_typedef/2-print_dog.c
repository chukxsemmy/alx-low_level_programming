#include <stdio.h>
#include "dog.h"
/**
 *print_dog - a function that prints a struct dog
 *@d : pointer to struct
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
<<<<<<< HEAD
		return;
	if ((*d).name == NULL)
		printf("nil\n");
=======
	return;
	if (d->name == NULL)
	printf("Name: (nil)\n");
>>>>>>> da70e8a221b59de6a3c1708928c13c615d8a9a75
	else
	printf("Name: %s\n", d->name);
	printf("Age: %.6f\n", d->age);
	if (d->owner == NULL)
	printf("Owner: (nil)\n");
	else
	printf("Owner: %s\n", d->owner);
}
