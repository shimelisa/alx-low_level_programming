#include <stdio.h>

/**
* main - print programs name
* @argc: argument counter = #of arg supplied to program
* @argv: argument vector = array of pointes to the arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
