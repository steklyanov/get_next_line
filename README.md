# get_next_line
21 School project. Write a function that will allow you to read a line ending with a newline character from a file descriptor.

An appoinment was to create function
```c
int    get_next_line(int fd, char **line);
```
, that will read from file specified with `fd` and save to `*line` exactly one line, leaving the rest in buffer, if it read more. So the amount of symbols to be read wit hone call of function `read` is specified with define [BUFF_SIZE](get_next_line.h). For this project i was able to use next standard C library functions
```c
ssize_t read(int fd, void *buf, size_t count);
void    *malloc(size_t size);
void    free(void *ptr);
```
It supports numerous file descriptors at once, allowing you to call get_next_line with different file descriptors and **always** get valid result.

## Summing up
At the end it is messy but stable, so i let it live.
