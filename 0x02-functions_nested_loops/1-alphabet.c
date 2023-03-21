#include "main.h"

/**
 * print_alphabet - utilizes on the _putchar finction to print
 * the alphabet a - z
 */

void print_alphabet(void)
{
	int ch;
	
	for (ch = 'a'; ch <= 'z'; ch++)
		_putcha(ch);
	_putchar("\n")
}
