
#include <fcntl.h>

int     open_file(char *file_name)
{
    int file;
    
    file = open(file_name, O_RDONLY);
    return (file);
}