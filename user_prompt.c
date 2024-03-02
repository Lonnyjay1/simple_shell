#include "shell.h"
/**
 * main - User defined pormpt function
 * Return: Always 0
 */

int main(void)
{
	char *buffer = NULL;
	size_t n = 0;
	ssize_t line;

	printf("sj_shell$ ");
	while (1)
	{
		line = getline(&buffer, &n, stdin);
		if (line == -1)
		{
			if (feof(stdin))
			{
				printf("End of File\n");
			}
			else
			{
				printf("Error Occured while reading input\n");
			}
			break;
		}
		printf("%s\n", buffer);
		printf("sj_shell$ ");
	}
	free(buffer);
	return (0);
}
