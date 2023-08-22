#include "main.h"
/**
* _printf - produces a stdout with arguments and specifiers
* @format: the format
* Return: returns the number of bytes printed
*/

int _printf(const char *format, ...)
{
	int total = 0;
	va_list args;
	const char *pointerToCharacter = format;

	va_start(args, format);

	while (*pointerToCharacter != '\0')
	{
		if (*pointerToCharacter == '%')
		{
			pointerToCharacter++;
			switch (*pointerToCharacter)
			{
				case 'c':
					{
						char c = (char)va_arg(args, int);
						_putchar(c);
						total++;
						break;
					}
				case 's':
					{
						char *string = va_arg(args, char *);
						write(1, string, _strlen(string));
						total += _strlen(string);
						break;
					}
				case '%':
					{
						_putchar('%');
						total++;
						break;
					}
				case 'd':
				case 'i':
					{
						int dintiger = va_arg(args, int);
						char *string = iTOs(dintiger);
						write(1, string, _strlen(string));
						total += _strlen(string);
						free(string);
						break;
					}
				case 'b':
					{
						unsigned int bUnsigned = va_arg(args, unsigned int);
						char *string = inTObinary(bUnsigned);
						write(1, string, _strlen(string));
						total += _strlen(string);
						free(string);
						break;
					}
				default:
					{
						_putchar('%');
						_putchar(*pointerToCharacter);
						total += 2;
						break;
					}
			}
		}
		else
		{
			_putchar(*pointerToCharacter);
			total++;
		}
		pointerToCharacter++;
	}

	va_end(args);

	return total;
}
