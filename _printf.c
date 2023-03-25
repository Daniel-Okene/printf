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
	va_list list;

	va_start(list, format);
}
