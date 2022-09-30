#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - Write a program that prints the minimum number
 * of coins to make change for an amount of money.
 * Usage: ./change cents
 * where cents is the amount of cents you need to give back
 * if the number of arguments passed to your program is not exactly 1,
 * print Error, followed by a new line, and return 1
 * you should use atoi to parse the parameter passed to your program
 * If the number passed as the argument is negative, print 0,
 * followed by a new line
 * You can use an unlimited number of coins of values 25, 10, 5, 2, and 1 cent
 * @argc: argc parameter
 * @argv: arrays of listed command
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int num, j, result = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}
	num = atoi(argv[1]);
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			num -= coins[j];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}
