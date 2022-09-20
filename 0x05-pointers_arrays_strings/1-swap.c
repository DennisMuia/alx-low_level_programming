#include "main.h"

/**
 * swap_int - swaps two integers' values
 * @a: first parameter
 * @b: second parameter
 *
 * Return: returns nothing
 */

void swap_int(int *a, int *b)

{
	int tmp = *a;

	*a = *b;
	*b = tmp;
}
