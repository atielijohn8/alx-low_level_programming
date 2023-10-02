#ifndef MAIN_H
#define MAIN_H

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int print_error(int error, char *s, int fd);
char *create_buffer(char *file);
void close_file(int fd);

#endif