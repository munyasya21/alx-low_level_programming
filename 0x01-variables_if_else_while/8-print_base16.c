#include <stdio.h>

/**
 * main - Entry point
 * author: Cynthia
 * Return: True 0 (Success)
 */
int main(void)
{
	int y;
	char b;

	for (y = 48; y < 58; y++)
		putchar(y);
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
