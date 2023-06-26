#include "main.h"

/**
 * _strlen - a function that returns the length of s string
 * @s: string
 * Return: length
 */
int _strlen(char *s)
{
	int longs = 0;

	while (*s != '\0')
	{
		longs++;
		s++;
	}

	return (longs);
}
