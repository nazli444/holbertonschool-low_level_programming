#ifndef DOG_H
#define DOG_H
/**
 * struct dog - a dog's basic info
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner's name
 *
 * Description: This structure stores basic information
 * about a dog, including its name, age, and owner.
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
#endif /*DOG_H*/
