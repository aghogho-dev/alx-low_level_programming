#ifndef DOG_H
#define DOG_H
/**
 * struct dog - describe dog
 * @name: first member
 * @age: second member
 * @owner: third member
 *
 * Description: Longer description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

/**
 * dog_t - equals struct dog
 */
typedef struct dog dog_t;
#endif
