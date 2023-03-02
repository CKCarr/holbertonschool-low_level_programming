#ifndef DOG_H
#define DOG_H

/**
 * struct dog  - Short description
 * @age: dog age
 * @name: dog name
 * @owner: dog owner name
 *
 * Description: Longer description
 */
struct dog
{
	float age;
	char *name;
	char *owner;
};

/**
  * dog_t - typedef for dog
  */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);













#endif
