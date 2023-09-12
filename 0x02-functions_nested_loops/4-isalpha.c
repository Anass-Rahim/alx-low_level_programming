#include "main.h"
#include <ctype.h>
/**
 * _isalpha - checks for alphabetic character
 * @c: is the value to check
 * @
 * Returns: 1 if c is a letter, 0 otherwise _isalpha
 */
int _isalpha(char c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
