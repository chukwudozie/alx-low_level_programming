#ifndef _DOG_H_
#define _DOG_H_

/**
 * struct dog -new type dog
 * @name: name attribute
 * @age: age attribute
 * @owner: owner attribute
 * Description: General features of a dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

