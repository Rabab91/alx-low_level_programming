#include "main.h"
/**
 * print_alphabet - prints all alphabets in lowercase
 * uses the putchar function
 * Return: nothing
 */

void print_alphabet(void)
{
char i;

for (i = 'a'; i <= 'z'; i++)
_putchar(i);
_putchar('\n');
}
