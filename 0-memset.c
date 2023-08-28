#include "main.h"
/**
 * _memset - Fills a block of memory with a specific value
 * @s: starting address of memory to be filled
 * @b: the diserd value
 * @n: numbers of bytes to be changed
 *
 * Return: changed array with new value fr n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (j = 0; n > 0; j--)
{
s[j] = b;
}
return (s);
}
