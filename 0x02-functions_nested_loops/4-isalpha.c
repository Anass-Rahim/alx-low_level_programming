#include "main.h"
#include <ctype.h>
/**
 * _isalpha - _isalpha - checks for alphabetic character
 * @c: is the value to check
 * @
 * Returns: 1 if c is a letter, 0 otherwise _isalpha
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
