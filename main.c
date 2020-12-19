
#include "./includes/header.h"
#include <stdlib.h>

int     main(int ac, char **av)
{
    int     file;
    int     len;
    char    *file_content;
    char    *file_start;
    char    *start_line;
    int     line;
    int     index;
    char    address[9] = "00000000";
    int     with_c;

    if (ac == 3)
    {
        if (av[1][0] == '-' && av[1][1] == 'C' && av[1][2] == '\0')
        {
            with_c = 1;
        }
        else
        {
            send_error(av[0], av[2]);
            return (0);
        }
    }
    else if (ac == 2)
        with_c = 0;
    else
    {
        send_error(av[0], av[1]);
        return (0);
    }
    file = open_file(with_c == 1 ? av[2] : av[1]);
    if (file <= 0)
    {
        send_error(av[0], with_c == 1 ? av[2] : av[1]);
        return (0);
    }
    len = file_len(&file);
    close_file(&file);

    file = open_file(with_c == 1 ? av[2] : av[1]);
    if (file <= 0)
    {
        send_error(av[0], with_c == 1 ? av[2] : av[1]);
        return (0);
    }
    file_content = read_file(&file, len);
    file_start = file_content;
    close_file(&file);

    line = 0;
    while (line <= len / HEXSIZE)
    {
        index = 0;
        if (line == len && file_content[index + (line * HEXSIZE)] == '\0')
            break;
        print_address(address, line);
        ft_print(1, "  ", 1);
        while (index < 16)
        {
            print_hex(file_content[index + (line * HEXSIZE)], (line == len / HEXSIZE) ? 1 : 0);
            index++ == 7 ? ft_print(1, "  ", 1) : ft_print(1, " ", 0);
        }
        if (with_c == 1)
        {
            index = 0;
            ft_print(1, " |", 1);
            while (index < 16)
            {
                ft_print_text(1, &(file_content[index + (line * HEXSIZE)]), (line == len / HEXSIZE) ? 1 : 0);
                index++;
            }
            ft_print(1, "|", 0);
        }
        break_line_print();
        line++;
    }
    print_len_file(len);
    break_line_print();
    free(file_content);
    return (0);
}
