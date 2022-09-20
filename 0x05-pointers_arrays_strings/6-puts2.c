#include "main.h"
#include <stdio.h>

/**
 * puts2 - prints every other character from first followed by new line
 * @str: string
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int i = 0;

	while (*(str + 1) != '\0')
	{
		if (i % 2 == 0)
			putchar (*(str + i));
		i += 2;
	}
	putchar('\n');
}
