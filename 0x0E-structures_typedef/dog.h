#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog struct
 * @name: input name
 * @age: input age
 * @owner: input owner name
 * Description: dog struct
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};
typedef struct dog dog_t;

void print_dog(struct dog *d);
void init_dog(struct dog *d, char *name, float age, char *owner);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
