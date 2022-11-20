#include <stdio.h>
#include <stdlib.h>

/* void * malloc(size_t size) */

int main(int argc, char *argv[])
{
	int i, j;
	int num[4];

	j = atoi(argv[1]) + atoi(argv[2]);
	printf("sum is: %d\n", j);

	j = 0;
	for (i = 1; i < 6; i++)
	{
		num[i - 1] = atoi(argv[i]);
	}

	for (j = 0; j < 5; j++)
		printf("%i element @address %p is: %d\n", j + 1, &(num[j]), num[j]);

	return (0);
}
