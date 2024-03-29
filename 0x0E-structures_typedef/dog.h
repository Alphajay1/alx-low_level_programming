#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure of information of a dog.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: name of the dog's owner.
 */


struct dog
{
	char *name;
	float age;
	char *owner;
};

/*
 * dog_t - type defination for the struct dog as an alias dog_t.
 */

typedef struct dog dog_t;

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
