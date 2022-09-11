#include <stdio.h>
/**
 * main - Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	int y;

	y = 'a';
	for (x = '0'; x <= '9'; x++)
{
	putchar(x);
}
	while (y <= 'f')
{
	putchar(y);
	y++;
}
	putchar('\n');
	return (0);
}
