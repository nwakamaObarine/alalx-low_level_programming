#ifndef DOG_H
#define DOG_H
/**
 * struct dog - tells about a dog
 * @name: Name of dog
 * @owner: dog owner
 * @age: Dog age
 *
 * Return: 0
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_arine;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_arine *new_dog(char *name, float age, char *owner);
void free_dog(dog_arine *d);
#endif
