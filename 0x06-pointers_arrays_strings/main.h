#ifndef MAIN_H
#define MAIN_H
/**
* main - header file for prototypes
* Description: contains prototype of all used function
* void prototypes (void)
* int prototypes (int)
*/

void _puts(char *str);
char *_strcat(char *dest, char *src);
char *_strncat(char *dest, char *src, int n);
char *_strncpy(char *dest, char *src, int n);
int _strcmp(char *s1, char *s2);
void reverse_array(int *a, int n);
char *string_toupper (char *);
char *cap_string (char *);

#endif	/* MAIN_H */
