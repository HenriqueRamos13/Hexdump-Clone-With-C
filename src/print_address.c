
#include "../includes/header.h"

int     actual_index(char c)
{
    int index;

    index = 0;
    while (index < 16)
    {
        if (c == HEX[index])
            return (index);
        index++;
    }

    return (0);
}

void    print_address(char *address, int line)
{
    int last_index;
    int index;

    index = 0;
    last_index = 7;
    while (index <= 6 && line > 0)
    {
        if (address[index] + 1 == 'f' && address[index] == 'f' && index != 0)
        {
            address[index] = '0';
            address[index + 1] = '0';
            address[index - 1] = HEX[actual_index(address[index - 1]) + 1];
            break;
        }
        else if (address[index + 1] == 'f')
        {
            address[index + 1] = '0';
            address[index] = HEX[actual_index(address[index]) + 1];
            break;
        }
        else if (address[index] == 'f' && address[index - 1] == '0')
        {
            address[index] = '0';
            address[index - 1] = '1';
            break;
        }
        else if (index == 6)
        {
            address[index] = HEX[actual_index(address[index]) + 1];
        }
        index++;
    }

    ft_print(1, address, 1);
}