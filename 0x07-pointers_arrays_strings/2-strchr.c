#include "main.h"

/**
 * _strchr - locate 1st occurrence of char in string and returns pointer there
 * @s: string to search
 * @c: target characer
 * Return: if c is found -a pointer to the first occurence.
 * if c is not found - NULL
*/

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{

	if (s[index] == c)
		return (s + index);
	}
		return ('\0');
}
