#ifndef DOG_H
#define DOG_H

/**
*struct dog - dog with some info
*@name: the dog's name
*@age: the dog's age
*@owner: the og's owner's name
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
* dog_t - typedef for a dog
*/
typedef struct dog dog_t;
/*dog_t *new_dog(char *name, float age, char *owner);*/


#endif
