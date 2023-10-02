#include "main.h"
#include <string.h>

/**
 * _memset - fills the first n bytes of the memory area pointed to by s
 * with the constant byte b Returns a pointer to the memory area s
 * @s: the address of memory to print
 * @b: desired value
 * @n: the size of the memory to print
 *
 * Return: changed array with new value for n bytes
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
		{
		s[i] = b;
		n--;
	}
	return (s);
}
