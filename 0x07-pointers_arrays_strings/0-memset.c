#include "main.h"
<<<<<<< HEAD
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
=======
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
>>>>>>> 5eb30109ac4119257b1dc9ffefb278cb6c1b53cc
}
return (s);
}
