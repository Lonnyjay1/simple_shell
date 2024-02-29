#ifndef SHELL_H
#define SHELL_H
/**
 * sj_print - Usr defined function that print to stdout
 * user_prompt - user defined funt that prompt the user to for an input
 * exec_fun - A function that execute user input
 * user_input - A function that takes user input
 * @str: Arguments
 */

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

void sj_print(const char *str);
void user_prompt(void);
void exec_fun(const char *str);
void user_input(char *str, size_t size);

#endif /* SHELL_H */
