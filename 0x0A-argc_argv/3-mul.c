#include <stdio.h>
#include <stdlib.h>

/**
* main - print programs name
* @argc: argument counter = #of arg supplied to program
* @argv: argument vector = array of pointes to the arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%i\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
