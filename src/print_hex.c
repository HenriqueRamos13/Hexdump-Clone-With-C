
#include "../includes/header.h"

void    print_hex(unsigned char c, int last)
{
    if (!(c == '\0'))
    {
        char to_print;
        if (c < 0)
            c = -c;
        to_print = c / HEXSIZE;
        ft_print(1, &(HEX[to_print]), 0);
        to_print = c % HEXSIZE;
        ft_print(1, &(HEX[to_print]), 0);
    }
    else
    {
        if (last)
            ft_print(1, "  ", 1);
        else
            ft_print(1, "00", 1);
    }
}