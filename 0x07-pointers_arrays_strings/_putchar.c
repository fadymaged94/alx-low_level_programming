#include <unistd.h>
<<<<<<< HEAD

/**
 * _putchar - writes the characater c to stdout
 * @c: The characater to print
=======
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
>>>>>>> 5eb30109ac4119257b1dc9ffefb278cb6c1b53cc
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}
