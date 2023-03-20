#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <errno.h>


/*PROTOTYPES*/
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);


int main(int argc, char *argv[]);

void handle_error(char *msg, char *file, int exit_code);

int open_file(char *filename, int flags, int mode);

void copy_file(char *src_file, char *dest_file, char **argv);








#endif
