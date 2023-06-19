#include <stdio.h>
/**
 * main - Entry point
 * Return:0 (Success)
 */

int main(void)
{
	char x;
	int z;

	x = 'a';
	z = '0';
	while (z < 10)
	{
		putchar(z + '0');
		z++;
	}
	while (x <= 'f')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
