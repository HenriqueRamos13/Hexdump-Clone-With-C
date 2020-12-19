
#include <unistd.h>
#include <stdlib.h>
#include "../includes/header.h"

char    *read_file(int *file, int len)
{
    char    *buff;
    int     counter;
    int     step;
    int     text;

    buff = malloc(sizeof(char) * (len));
    text = read(*file, buff, len);
    return (buff);
}