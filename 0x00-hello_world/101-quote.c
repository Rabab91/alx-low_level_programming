#include <unisted.h>
/**
 * main - Prints out the last part of a quote in the standart error.
 * Return: 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
