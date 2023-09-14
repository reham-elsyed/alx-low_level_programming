#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* main - prints the minimum number of coins to
* make change foramount money
* @argc: number arguents
* @argv: array argumnts
*
* Return: 0 success),1(Error)
*/
int main(int argc, char *argv[])
{
	int nums, j, res;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	nums = atoi(argv[1]);
	res = 0;

	if (nums < 0)
	{
		printf("0\n");
		return (0);
	}

	for (j = 0; j < 5 && nums >= 0; j++)
	{
		while (nums >= coin[j])
		{
			res++;
			nums -= coin[j];
		}
	}

	printf("%d\n", res);
	return (0);
}
