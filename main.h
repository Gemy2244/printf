#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int _printf(const char *format, ...);

char *iTOs(int n);

void reverser(char *string, int length);

char *inTObinary(unsigned int n);

int _putchar(char c);

unsigned int _strlen(const char *string);

#endif
