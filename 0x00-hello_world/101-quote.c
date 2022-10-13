#include <stdio.h>
#include <unistd.h>

/**
 * main - main block
 * Description: print quote w/o printf & put
 * Return: 0 always return 0
 */

int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
