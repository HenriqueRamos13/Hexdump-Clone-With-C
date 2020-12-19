
#include "../includes/header.h"

void    send_error(char *program_name, char *file_name)
{
    ft_print(2, program_name, 1);
    ft_print(2, ": ", 1);
    ft_print(2, file_name, 1);
    ft_print(2, ": ", 1);
    ft_print(2, "No such file or directory\n", 1);

    ft_print(2, program_name, 1);
    ft_print(2, ": ", 1);
    ft_print(2, file_name, 1);
    ft_print(2, ": ", 1);
    ft_print(2, "Bad file descriptor\n", 1);
}