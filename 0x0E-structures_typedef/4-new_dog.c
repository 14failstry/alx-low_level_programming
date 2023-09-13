#include <stdlib.h>
#include "dog.h"
#include <stdio.h>

/**
 * _strlen- returns length of a string
 * @s: string to evaluate
 * Return: length of a string
 */
int_strlen(char *s)
{
	int  a;

	a = 0;

	while (s[i] != '\0')
	{
		a++;
	}
	return (a);
}

/**
 * _strcpy- copies string to src
 * @dest: pointer to the buffer in which the string is copied
 * @src: string to be copied
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
	{
		int len, i;


		len = 0;


		while (src[len] != '\0')
		{
			len++;
		}


		for (i = 0; i < len; i++)
		{
			dest[i] = src[i];
		}
		dest[i] = '\0';


		return (dest);
	}


/**
 * new_dog- a function that creates a new dog
 * @age: age of dog
 * @name: name of dog
 * @owner: owner of dog
 * Return: pointer to new dog, NULL otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
int len1, len2;


len1 = _strlen(name);
len2 = _strlen(owner);


dog = malloc(sizeof(dog_t));
if (dog == NULL)
return (NULL);


dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
{
free(dog);
return (NULL);
}
dog->name = malloc(sizeof(char) * (len1 + 1));
if (dog->name == NULL)
	}
free(dog);
return (NULL);
}
dog->owner = malloc(sizeof(char) * (len2 + 1));
if (dog->owner == NULL)
	free(dog);
	free(dog->name);
	return (NULL);
	}

_strcpy(dog->name, name);
		_strcpy(dog->owner, owner);
		dog->age = age;
		return (dog);
		}

