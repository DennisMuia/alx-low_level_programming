#include <stdio.h>
#include "main.h"

/**
 * Print_traingle - prints triangle
 * @size: size parameter of a triangle
 * Return: Nothing
 */

void print_triangle(int size)
{
	int inc1, inc2;

	if (size > 0)
	{
		for (inc1 = 1; inc1 <= size; inc1++)
		{
			for ((inc2 = size - inc1); inc2 > 0; inc2--)
			{
				putchar(' ');
			}
			for (inc2 = 0; inc2 < inc1; inc2++)
			{
				putchar('#');
			}
			if (inc1 == size)
			{
				continue;
			}
			putchar('\n');
		}
	}
	putchar('\n');
}
