#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num, result;
	int j = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");

		return (1);
	}

	result = 0;

	if (argc == 2)
		num = atoi(argv[1]);
	{
		if (num < 0)
		{
			printf("0\n");
			return (0);
		}

		else if (num >= 0)
		{
			while (j < 5)
			{
			result = result + (num / coins[j]);
			num = num % coins[j];
			j++;
			}
		}

	printf("%d\n", result);
	return (0);
	}
}
