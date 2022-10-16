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
	long int l;
	long long int k;
	printf("Size of int: %lu.\n", (unsigned long) sizeof(i));
	printf("Size of float: %lu.\n", (unsigned long) sizeof(f));
	printf("Size of char: %lu.\n", (unsigned long) sizeof(c));
	printf("Size of long int: %lu.\n", (unsigned long) sizeof(l));
	printf("Size of long long int: %lu.\n", (unsigned long) sizeof(k));
	return (0);
}
