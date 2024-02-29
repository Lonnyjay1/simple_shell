#include "shell.h"
/**
 * exec_fun - Defined function for exection file
 * @str: Passed arguments
 */

void exec_fun(const char *str)
{
	pid_t pid = fork();
	char *str_buffer[130];
	int str_buffer_count = 0;
	char *token;

	if (pid == (-1))
	{
		sj_print("Error while forking");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		token = strtok((char *)str, " ");
		while (token != NULL)
		{
			str_buffer[str_buffer_count++] = token;
			token = strtok(NULL, " ");

		}
		str_buffer[str_buffer_count] = NULL;

		const char pathname[] = "/bin/ls";
		char *const argv[] = {"ls", "-l", NULL};

		execve(pathname, argv, NULL);

		return (0);
		exit(EXIT_FAILURE);
	}
	else
	{
		wait(NULL);
	}
}
