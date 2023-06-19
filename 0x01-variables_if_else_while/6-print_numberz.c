#include <stdio.h>
/**
 * main - Entyry point
 * Return:0 (Success)
 */

int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		putchar(x + '0');
		x++;
	}
	putchar('\n');
	return (0);
}
