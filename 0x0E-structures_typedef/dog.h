#ifndef DOG_H
#define DOG_H

#define  <stdio.h>
#define <stdlib.h>

struct dog
{
	float age;
	char *name;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);














#endif
