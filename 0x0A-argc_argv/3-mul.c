#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]);
/**
 * main - Program that takes frist two integer arguments and prints the product
 * @argc: Number of comand line arguments
 * @argv: Array name
 * Return: 1 if not enough arguments passed in, 0 otherwise
 */
int main(int argc, char *argv[])
{
int i, j;
if (argc == 1 || argc == 2)
{
printf("Error\n");
return (1);
}
else
{
j = 1;
for (i = 1; i < 3; i++)
j *= atoi(argv[i]);
printf("%d\n", j);
}
return (0);
}
