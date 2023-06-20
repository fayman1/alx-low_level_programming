#include "main.h"

/**
 * _isalpha  - checks for alphabet characters
 * @c: character to be checked
 * Return: 1 if c is alphabet otherwise 0
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
