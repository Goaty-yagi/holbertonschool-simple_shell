#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define TRUE 1

/**
 * struct InputBuffer - a wrapper around the state needed for getline() and its return value
 * Description:
 * 	getline(char **lineptr, size_t *n, FILE *stream) has three state requirements:
 * 		- reads an entire line
 * 	from `stream` and stores the address of the buffer containing the text 
 * 	into *lineptr.
 *
 * 	If *lineptr is set to NULL before the call, then getline() will allocate 
 * 	a buffer for storing the line.
 * 
 * @buffer: a string buffer
 * @buffer_length: variable
 * @input_length: to store the number of bytes read by getline()
 */
typedef struct {
	char *buffer;
	size_t buffer_length;
	ssize_t input_length;
} InputBuffer;

void print_prompt();
void print_command_not_found_error(char *str);
InputBuffer *new_input_buffer();
char *readline(InputBuffer *input_buffer);
void close_input_buffer(InputBuffer *input_buffer);
int evaluate(char *str);
