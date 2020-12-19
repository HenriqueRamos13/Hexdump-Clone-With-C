
#include <unistd.h>

void    ft_print(int type, char *str, int multi)
{
    if (multi == 1)
    {
        while (*str != '\0')
        {
            if (*str == '\0' || *str == '\n' || *str == '\t' || *str >= 127 || *str <= 31 && type != 2)
            {
                write(type, ".", 1);
            }
            else
                write(type, &(*str++), 1);
        }
    }
    else
    {
        if (*str != '\0')
        {
            if (*str == '\0' || *str == '\n' || *str == '\t' || *str >= 127 || *str <= 31 && type != 2)
            {
                write(type, ".", 1);
            }
            else
                write(type, &(*str), 1);
        }
    }
}

void    ft_print_text(int type, char *str, int last)
{
        if (last == 1)
        {
            if (*str != '\0')
            {
                if (*str == '\0' || *str == '\n' || *str == '\t' || *str >= 127 || *str <= 31 && type != 2)
                {
                    write(type, ".", 1);
                }
                else
                    write(type, &(*str), 1);
            }
        }
        else
        {
            if (*str == '\0' || *str == '\n' || *str == '\t' || *str >= 127 || *str <= 31 && type != 2)
                {
                    write(type, ".", 1);
                }
                else
                    write(type, &(*str), 1);
        }
}