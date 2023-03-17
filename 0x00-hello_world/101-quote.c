#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 * Filedes: file des
 * Buf: is the buffer
 * Nbyte: number of byte
 */

/* prototype of function write*/
int write(int filedes, const char *buf, unsigned int nbyte);
int main(void)
{
	/* main fuction */
	write(1, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
