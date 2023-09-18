#include "main.h"

/**
 * _isupper - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 if character is uppercase or 0 if anything else
 */

int _isupper(int c)
{
if (c >= 65 && c <= 90)
{
return (1);
}
return (0);
}
