#inlcude "main.h"
/**
* rot13 - charcter coding by shifting 13 positions
* @s: String to be coded
*
* Return: codded charcater
*/
char *rot13(char *s)
{
	int i, j;
	char chr1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char chr2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; chr1[j] != '\0'; j++)
		{
			if (s[i] == chr1[j])
			{
				s[i] = chr2[j];
				break;
			}
		}
	}

	return (s);
}
