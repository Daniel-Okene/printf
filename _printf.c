#inlcude "main.h"

/**
 * _printf - a prototype of the standard printf function
 * @format: conversion specifiers
 *
 * Return: number of characters printed
 */
int _printf(const char *format, ...)
{
	int i, printed = 0, printed_char = 0;
	int flags, width,, precision, size, buff_ind = 0;
	va_list list;
	char buffer[BUFF_SIZE];

	va_start(list, format);
	for (i = 0; format && &format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{}
		printed++;
	}

	va_end(list, format);
}
