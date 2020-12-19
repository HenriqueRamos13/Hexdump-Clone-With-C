
#include <unistd.h>
#include <stdio.h>
int     file_len(int *file)
{
    char    buff[0];
    int     size;

    size = 0;
    while (read(*file, buff, 1) > 0)
        size++;
    return (size);
}