#include "main.h"
/**
 * print _putchar twice 
 * return: 0 Success
 */
void print_alphabet(void)
{
	char j;

	for (j= 'a'; j <= 'z'; j++)
	{
		_putchar(j);

	}
	_putchar(j);
}

