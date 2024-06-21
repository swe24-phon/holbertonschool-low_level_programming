#include "main.h"

/**
 * _isalpha - checking for all alphabet types
 *@letter : character to be checked
 *
 * Return: true on sucess
 *
 */

int _isalpha(int letter)
{
return ((letter >= 97 && letter <= 122) || (letter >= 65 && letter <= 90));
}
