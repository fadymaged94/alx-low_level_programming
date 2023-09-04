#include "main.h"
/**
 * _memset-Fills a block of memory with a specific value
 * @s: starting address of memory be filled
 * @b: the desird value
 * @n: number of bytes to be changed
 *
 * Return: new value
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int k = 0;
for (k = 0; n > 0; k++, n--)
{
s[k] = b;
}
return (s);
}
