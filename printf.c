#include <stdarg.h>
#include <stdio.h>

/**
 * _printf - prints anything to the std output
 * 
 * @format: a character string that serves
 * as a template to specify the desired output format
 * 
 * Return: printed chars
 */

int _printf(const char *format, ...)
{
	va_list args;
	int count = 0;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'd':
				case 'i':
					{
						int num = va_arg(args, int);
						count += printf("%d", num);
						break;
					}
				case 'u':
					{
						unsigned int num = va_arg(args, unsigned int);
						count += printf("%u", num);
						break;
					}
				case 'o':
					{
						unsigned int num = va_arg(args, unsigned int);
						count += printf("%o", num);
						break;
					}
				case 'x':
				case 'X':
					{
						unsigned int num = va_arg(args, unsigned int);
						count += printf("%x", num);
						break;
					}
				case 'c':
					{
						char c = (char)va_arg(args, int);
						count += printf("%c", c);
						break;
					}
				case 's':
					{
						char *s = va_arg(args, char *);
						count += printf("%s", s);
						break;
					}
				case 'p':
					{
						void *ptr = va_arg(args, void *);
						count += printf("%p", ptr);
						break;
					}
				case '%':
					{
						count += printf("%%");
						break;
					}
				default:
					{
						count += printf("%%r", *format);
						break;
					}
			}
		}
		else
		{
			putchar(*format);
			count++;
		}
		format++;
	}
	va_end(args);
	return (count);
}
