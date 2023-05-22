#ifndef DOG_H
#define DOG_H
/**
 * struct dog - entry
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 * Descrition: long description
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
