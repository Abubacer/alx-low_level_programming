#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: the list of types of arguments passed to the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *separator = "";
	va_list list_type;

	va_start(list_type, format);
	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case'c':
					printf("%s%c", separator, va_arg(list_type, int));
					break;
				case'i':
					printf("%s%d", separator, va_arg(list_type, int));
					break;
				case'f':
					printf("%s%f", separator, va_arg(list_type, double));
					break;
				case's':
					str = va_arg(list_type, char*);
					if (str == 0)
						str = "(nil)";
					printf("%s%s", separator, str);
					break;
				default:
					i++;
					continue;
			}
			separator = ",";
			i++;
		}
	}
	printf("\n");
	va_end(list_type);
}
