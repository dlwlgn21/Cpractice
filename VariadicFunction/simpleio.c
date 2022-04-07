#include <stdio.h>
#include <stdarg.h>
#include <string.h>
#include "simpleio.h"

int add_int(const size_t count, ...)
{
	va_list ap;
	size_t i;
	int sum = 0;
	va_start(ap, count);
	{
		for (i = 0; i < count; ++i) {
			sum += va_arg(ap, int);
		}

	}
	va_end(ap);

	return sum;
}

static void print_int_recursive(unsigned int val)
{
	/* base case */
	if (val == 0) {
		return;
	}
	
	/* recursive case */
	print_int_recursive(val / 10);
	
	putchar('0' + val % 10);
}

static void print_int(unsigned int val)
{
	if (val == 0) {
		putchar('0');
		return;
	}
	
	print_int_recursive(val);
}
void printf_simple(const char* format, ...)
{
	va_list ap;

	va_start(ap, format);
	{
		const char* str;
		unsigned int val;
		while (*format != '\0')	{
			switch(*format) {
			case 's':
				str = va_arg(ap, const char*);
				while (*str != '\0') {
					putchar(*str++);
				}
				break;
			case 'c':
				val = va_arg(ap, unsigned int);
				putchar(val);
				break;
			case 'd':
				val = va_arg(ap, unsigned int);
				print_int(val);
				break;
			default:
				putchar(*format);
				break;
			}
			++format;
		}
	
	}
	va_end(ap);

}
