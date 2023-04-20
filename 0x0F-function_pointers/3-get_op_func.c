#include "3-calc.h"

/**
 * get_op_func - ask user for the operation.
 * @s: the operator passed as argument to the program.
 * Return: corresponds to the operator given as a parameter.
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

	for (i = 0; i < 5; i++)
		if (s && s[0] == ops[i].op && !s[1])
			return (ops[i].f);

	return (0);
}
