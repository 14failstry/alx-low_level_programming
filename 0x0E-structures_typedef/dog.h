#ifndef dog_H
#define dog_H

/**
 * struct dog- describing a dogs information
 * @:age- first
 * @:name- second
 * @:owner- third
 */
struct dog
{
	float *age;
	char *name;
	char *owner;
	{;
		/**
		 * dog_t - typedef for struct dog
		 */
		typedef struct dog_x;

		void int_dog(struct dog *d, char *name, float *age, char *owner);
		void print_dog(struct dog *d);

		dog_x *new_dog
			(char *name, float *age, char *owner);
		void free_dog(dog_x *d);
		char *strcpy(char *dest,  char *src);
		int _strlen(char *s);
#endif

