#ifndef _DOG_H_
#define _DOG_H_

/**
 * dog_t - typedef of the dog struct
 */

typedef struct dog dog_t;

/**
 * struct dog - give some info of a dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Description: the structure dog contains the name age
 * and the owner of the dog.
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
