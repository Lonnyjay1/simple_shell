#include "shell.h"
/**
 * sj_print - User define that behave as printf
 * @str: Am argument passed
 */


void sj_print(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
