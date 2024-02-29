#include "shell.h"
/**
 *  user_input - User defined function that that takes usr input
 *  @str: An argument
 *  @size: Size id the string
 */

void user_input(char *str, size_t size)
{
	if (fgets(str, size, stdin) == NULL)
	{
		if (feof(stdin))
		{
			sj_print("\n");
			exit(EXIT_SUCCESS);
		}
		else
		{
			sj_print("Error.\n");
			exit(EXIT_FAILURE);
		}
	}
	str[strcspn(str, "\n")] = '\0';
}
