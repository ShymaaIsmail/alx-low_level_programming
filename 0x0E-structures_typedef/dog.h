#ifndef _dog_
#define _dog_

/**
 * struct dog - task zero requirement
 * @name: name
 * @age: age
 * @owner: owner
 *
 * Description: dog struct for task zero
 */
struct dog
{
char *name;
float age;
char *owner;
};

/**
*dog_t - dog type
*/
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif
