#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 * Return: 0
 */
int main(void)
{
	int base;

	for (base = 48; base < 58; base++)
	{
		putchar(base);
		if (base != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
