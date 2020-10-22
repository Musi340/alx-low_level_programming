#include <stddef.h>
#include "3-calc.h"
/**
 * get_op_func - slect correct function
 * to be performed
 * @s: The operator
 *
 * Return: pointer to the operation function
 */
int (*get_op_func(char *s))(int, int)
{
op_t ops[] = {
	{"+", op_add},
	{"-", op_sub},
	{"*", op_mul},
	{"/", op_div},
	{"%", op_mod},
	{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op != NULL)
	{
	if (*s == *(ops[i].op))
	break;
	i++;
	}
	return (ops[i].f);
}
