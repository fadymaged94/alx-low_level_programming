#include "main.h"
/**
 * *create_array - Creates an array of chars,
 * and intializes it with a specific char.
 * @size: size of array
 * @c: char to initialize
 * Return: pointer to the array initialized or NULL
 */
char *create_array(unsigned int size, char c)
{
char *n = malloc(size);
if (size == 0 || n == 0)
{
return (0);
}
while (size--)
{
n[size] = c;
}
return (n);
}
