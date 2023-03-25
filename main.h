#ifndef MAIN_H
#define MAIN_H

/* Standard Libraries */
#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>

/* Constant Macros */
#define BUFF_SIZE 1024
#define UNUSED(x) (void)(x)

/* Flags */
#define F_MINUS 1
#define F_PLUS 2
#define F_ZERO 4
#define F_HASH 8
#define F_SPACE 16

/* Sizes */
#define S_LONG 2
#define S_SHORT 1

/* Data type for all functions*/
/**
 * struct fmt - struct operation
 * @fmt: the format specifier
 * @fn: function associated
 */
struct fmt
{
	char fmt;
	int (*fn)(va_list, char[], int, int, int, int,);
};

/**
 * typedef struct fmt fmt_t - struct op
 * @fmt: format specifier
 * @fm_t: associated function
 */
typedef struct fmt fmt_t;

/* Main function prototypes*/
int _printf(const char *format, ...);
int print_handler(const char *fmt, int *i, va_list list,
		char buffer[], int flags, int width int precision, int size);

/****** Sub function prototypes ******/

/* Functions to handle chars, none and strings */
int print_char(va_list types, char buffer[], int flags,
		int width, int precision, int size);
int print_string(va_list types, cahr buffer[], int flags,
		int width, int precision, int size);
int print_none(va_list types, cahr buffer[], int flags,
		int width, int precision, int size);

#endif /*MAIN_H*/
