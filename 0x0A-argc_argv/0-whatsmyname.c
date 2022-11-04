#include <stdio.h>

/**
* main - print programs name
* @argc: argument counter = #of arg supplied to program
* @argv: argument vector = array of pointes to the arguments
*
* Return: 0
*/
int main(int argc, char *argv[])
/* int main(int _attribute_((_unused_)) argc, char * argv[])*/
{
	argc = argc;
	printf("%s\n", *argv);
	return (0);
}
