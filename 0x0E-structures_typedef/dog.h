#ifndef DOG_H
#define DOG_H
/**
 * struct dog - the structure
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Description: creating a  new struct called dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
#endif
