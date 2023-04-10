#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * main-print mult of 2 numbers.
 * @argc:number of commandline arguments.
 * @argv:pointer to an array of command line arguments.
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}

	else
	{
		printf("Error\n");

		return (1);
	}

	return (0);
}
