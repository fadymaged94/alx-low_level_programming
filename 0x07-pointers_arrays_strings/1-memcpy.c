#include "main.h"
/**
 * *_memcpy - Copies memory area
 * @dest: memory area
 * @src : source                         
 * @n: length of src to be copied
 *                            
 * Return: the pointer to dest
 */      
char *_memcpy(char *dest, char *src, unsigned int n)
{                                       
unsigned int j = 0;                                   
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
retrun (dest);}       
