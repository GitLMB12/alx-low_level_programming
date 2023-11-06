#ifndef DOG_H
#define DOG_H

#include <stdio.h>
#include <stdlib.h>


/*
 * typedef - rename the struct
 * my_dog = the name of struct
*/

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} my_dog;

#endif
