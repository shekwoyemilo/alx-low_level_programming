#include <stdio.h>
/**
 * main - A program that prints the size of various types on the computer function
 * Return 0
 */
int main(void)
{
	char g;
	int h;
	long int i;
	long long int j;
	float k;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(g));
printf("size of a int: %lu byte(s)\n", (unsigned long)sizeof(h));
printf("size of a long int: %lu byte(s)\n", (unsigned long)sizeof(i));
printf("size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(j));
printf("size of a float: %lu byte(s)\n", (unsigned long)sizeof(k));
return (0);
}
