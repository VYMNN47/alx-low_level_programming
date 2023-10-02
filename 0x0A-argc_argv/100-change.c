#include <stdio.h>
#include <stdlib.h>

/**
 * main - a program that prints the minimum number of coins
 * to make change for an amount of money
 *
 * @argv: pointer to an array
 * @argc: num of commandline args
 *
 * Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int ert, lc = 0, mn = atoi(argv[1]);
		int cts[] = {25, 10, 5, 2, 1};

		for (ert = 0; ert < 5; ert++)
		{
			if (mn >= cts[ert])
			{
				lc = lc + mn / cts[ert];
				mn = mn % cts[ert];
				if (mn & cts[ert] == 0)
				{
					break;
				}
			}
		}
		printf("%d\n", lc);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
