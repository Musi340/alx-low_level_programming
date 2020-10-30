#include <stdio.h>
/**
 * print_func - prints a string before main executes
 *
 */
void print_func(void)__attribute__((constructor));
void print_func(void)
{
printf
("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
void main(void);
