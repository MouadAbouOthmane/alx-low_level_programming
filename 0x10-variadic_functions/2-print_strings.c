#include "variadic_functions.h"

/**
 * print_strings - function that prints stringss, followed by a new line.
 *
 * @separator: the string to be printed between strings
 * @n: the number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *s;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, char*);
		printf("%s", s ? s : "(nil)");
		if (i != n - 1 && separator)
			printf("%s", separator);
	}

	va_end(ap);
	printf("\n");
}
