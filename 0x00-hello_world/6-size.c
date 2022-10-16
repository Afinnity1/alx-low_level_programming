#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	float f;
	char c;
	long l;
	printf("Size of int: %lu.\n", (unsigned long) sizeof(i));
	printf("Size of float: %lu.\n", (unsigned long) sizeof(f));
	printf("Size of char: %lu.\n", (unsigned long) sizeof(c));
	printf("Size of long: %lu.\n", (unsigned long) sizeof(l));
	return (0);
}
