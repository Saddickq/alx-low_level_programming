#ifndef DOG_H
#define DOG_H
/**
 * struct dog - details for dog
 * @name: name
 * @age : age
 * @owner: owner
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
/**
 * dog_t - typedef for struct dog
 * @char: char
 * Return: int
 */

int _putchar(char);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif
