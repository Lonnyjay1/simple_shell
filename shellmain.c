#include "shell.h"
/**
 * main - The main function
 * Return: Always 0
 */

int main(void)
{
	char c[130];

	while (1)
	{
		user_prompt();
		exec_fun(c);
		user_input(c, sizeof(c));
	}
	return (0);
}
