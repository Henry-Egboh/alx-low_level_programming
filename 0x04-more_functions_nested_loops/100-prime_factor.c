#include <stdio.h>

/**
 * main - max prime factor
 * Return: Always 0
 */

int main(void)
{
	long num = 612852475143;
	long div;

	while (div < (num / 2))
{
	if ((num % 2) == 0)
{
	num = num / 2;
	continue;
}
	for (div = 3; div < (num / 2); div += 2)
{
	if ((num % div) == 0)
	num = num / div;
}
}
	printf("%ld\n", num);
	return (0);
}
