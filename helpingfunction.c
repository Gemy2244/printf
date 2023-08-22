#include "main.h"

/**
* iTOs - function that converts an int to a string
* @n: integer to be converted 
* Return: the buffer pointer
*/
char *iTOs(int n)
{
int sign = n;

    int index = 0;
    char *newstring = malloc(sizeof(char) * 12);
    if (newstring == NULL)
    {
        return NULL;
    }

    

    if (n < 0)
    {
        n = -n;
    }

    do
    {
        newstring[index++] = n % 10 + '0';
        n /= 10;
    } while (n > 0);

    if (sign < 0)
    {
        newstring[index++] = '-';
    }

    newstring[index] = '\0';

    reverser(newstring, index);

    return newstring;
}


/**
* reverser - function that reverses a string
* @length: integer to be converted 
* @string: string to be reversed
* Return: void
*/
void reverser(char *string, int length)
{

    char *starting = string;
    char *ending = string + length - 1;

    char temporarychar;
    
    while (starting < ending)
    {
        temporarychar = *starting;
        *starting = *ending;
        *ending = temporarychar;
        starting++;
        ending--;
    }
}

/**
* inTObinary - function that converts an int to a string
* @n: integer to be converted 
* Return: the buffer pointer
*/
char *inTObinary(unsigned int n)
{
int index = 0; 
    char *newstring = malloc(sizeof(char) * 33);
    if (newstring== NULL)
    {
        return NULL;
    }
 
     
     do 
     { 
         newstring[index++] = (n & 1) + '0'; 
         n >>= 1; 
     } while (n > 0); 
     newstring[index] = '\0'; 
     reverser(newstring, index); 
     return newstring; 
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
unsigned int _strlen(const char *string) {

unsigned int length = 0;

  while (*string != '\0') {

    length++;

    string++;
  }

  return length;
}
