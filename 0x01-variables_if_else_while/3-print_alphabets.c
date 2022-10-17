#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (pass)
 */
int main(void)
{
	char k;
	char d;

	for (k = 'a'; k <= 'z'; k++)
		putchar(k);
	for (d = 'A'; d <= 'Z'; d++)
		putchar(d);
	putchar('\n');
	return (0);
}
