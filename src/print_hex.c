
#include "../includes/header.h"

void    print_hex(char c)
{
    if (!(c == '\0'))
    {
        char to_print;

        to_print = c / HEXSIZE;
        ft_print(1, &(HEX[to_print]), 0);
        to_print = c % HEXSIZE;
        ft_print(1, &(HEX[to_print]), 0);
    }
    else
        ft_print(1, "  ", 1);
}