/**
 * _putchar - write sth
 * @c: input
 * Return: value
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
