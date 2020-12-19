
#include "../includes/header.h"

void    print_len_file(int len)
{
    int     total_len;
    char    hex[9] = "00000000";

    total_len = 8;
    while (--total_len >= 0)
    {
        hex[total_len] = HEX[len % 16];
        len = len / 16;
    }
    ft_print(1, hex, 1);
}