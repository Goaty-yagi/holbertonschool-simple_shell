#include "shell.h"

void print_prompt() 
{
	printf("$ ");
}

void print_command_not_found_error(char *str)
{
	printf("hash: %s :command not found\n", str);
}
