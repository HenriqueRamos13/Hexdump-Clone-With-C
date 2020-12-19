
#include "../includes/header.h"
#include <stdio.h>
void    print_hex(char c)
{
    if (!(c == '\0'))
    {
        char to_print;
        if (c < 0)
            c = c * -1;
        to_print = c / HEXSIZE;
        ft_print(1, &(HEX[to_print]), 0);
        to_print = c % HEXSIZE;
        ft_print(1, &(HEX[to_print]), 0);
    }
    else
        ft_print(1, "00", 1);
}