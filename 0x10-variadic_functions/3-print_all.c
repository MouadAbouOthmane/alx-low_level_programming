#include "variadic_functions.h"

/**
 * print_all - prints anything.
 * @format: the format of arguments.
 */

void print_all(const char * const format, ...)
{

	int i = 0;
	char *s, *spr = "";

	va_list ap;

	va_start(ap, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", spr, va_arg(ap, int));
					break;
				case 'i':
					printf("%s%d", spr, va_arg(ap, int));
					break;
				case 'f':
					printf("%s%f", spr, va_arg(ap, double));
					break;
				case 's':
					s = va_arg(ap, char*);
					printf("%s%s", spr, s ? s : "(nil)");
					break;
				default:
					i++;
					continue;
			}
			spr = ", ";
			i++;
		}
	}
	printf("\n");
	va_end(ap);
}
