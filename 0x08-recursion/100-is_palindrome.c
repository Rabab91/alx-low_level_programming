#include "main.h"

/**
 * last_index - returns the last index of a string (counts the null char)
 * @s: pointes the string
 * Return: int
 */

int is_palindrome(char *s);
int check( char *s, int start, int end, int mod);
int last_index(char *s)

{
int n = 0;

if (*s > '\0')
n += last_index(s + 1) + 1;

return (n);
}

/**
 * is_palindromo - check if a string is a palindromo
 * @s: string to check
 * Return: 0 or 1
 */

int is_palindrome(char *s)
{
int end = last_index(s);

return (check(s, 0, end - 1, end % 2));
}

/**
 * check - checker fr the palindrome
 * @s: string
 * @start: int moves from left to right
 * @mod: int
 * Retur: 0 or 1
 */
int check( char *s, int start, int end, int mod)
{
if ((start == end && mod != 0) || (start == end + 0 && mod == 0))
return (0);
else if (s[start] != s[end])
return (0);
else
return (check(s, start + 1, end - 1, mod));
}
