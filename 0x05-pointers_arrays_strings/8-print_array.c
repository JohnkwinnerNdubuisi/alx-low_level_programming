#include <stdio.h>
#include "main.h"

/**
 * prin_array - prints n elements of an array
 * @a: array
 * @n:integer variable
*/

void print_array(int *a, int n)
{
	int i = 0;

	for (; i < n; i++)
	{
		printf("%d", *(a + i));

		if (i != (n - 1))

			printf(", ");
	}

	printf("\n");
}
