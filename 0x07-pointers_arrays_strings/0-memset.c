#include "main.h"
/*
 * _memset- fills a memory with a new specific value
 * @s: starting address of memory
 * @b: the desird value
 * @n: the changed number
 * Return: new value for n bytes
 */
char *_memset(char *s, char b, unsigned int n)
{
int j = 0;
for (; n > 0; j++)
{
s[j] = b;
n--;
}
return (s);
}
