#include <stdio.h>
/**
 * main - Entry point
 * Return:0 (Success)
 */

int main(void)
{
	char x;
	int d;

	x = 'a';
	d = '0';
	while (d < 10)
	{
		putchar(d + '0');
		d++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
