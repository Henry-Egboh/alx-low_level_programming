#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
*main - Entry point
*Return:The last digit 
*/
int main(void)
{
	int n;
	int lastdigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	lastdigit = n % 10;
	if (lastdigit > 5)
{
	printf("Last digit of %d is %d and is greater than 5\n", n, lastdigit);
}
	else if (n == 0)
{
	printf("Last digit of %d is %d and is 0\n", n, lastdigit);
}
	else if (n < 6 && n != 0)
{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdigit);
}
	else
{
	printf("Last digit of %d is %d and is %d\n", n, lastdigit, lastdigit);
}
	return (0);
}
