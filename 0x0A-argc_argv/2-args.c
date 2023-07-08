#include <stdio.h>
#include "main.h"

/**
 * main - prints all arguements received
 * @argc: argument count
 * @argv: argument array
 *
 * Reture: all argument
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
