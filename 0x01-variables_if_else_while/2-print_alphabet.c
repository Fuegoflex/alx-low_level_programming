#include <stdlib.h>
/**
 * main - Entry point
 * Return:0 (Success)
 */

int main(void)
{
	char x;

	x = 'a';
	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
