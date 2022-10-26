#include "main.h"
/**
* leet - change aeotl (AEOTL) to 73071
* @s: string to be changed
*
* Return: char with modified by numbers
*/
char *leet(char *s)
{
	int i, j;
	char chr1[] = "AEOTLaeotl";
	char chr2[] = "4307143071";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (s[i] == chr1[j])
			{
				s[i] = chr2[j];
			}
		}
	}

	return (s);
}
