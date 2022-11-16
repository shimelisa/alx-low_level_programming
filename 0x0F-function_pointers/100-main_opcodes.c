#include <stdio.h>
#include <stdlib.h>

/**
 * main - Prints the opcodes of itself.
 * @argc: number of arguments supplied to the program
 * @argv: array of pointers to the arguments
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int h, i;
	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	h = atoi(argv[1]);

	if (h < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < h; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == h - 1)
			continue;
		printf(" ");

		address++;
	}

	printf("\n");

	return (0);
}
