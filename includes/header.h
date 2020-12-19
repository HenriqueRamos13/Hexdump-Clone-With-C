#ifndef HEADER_H
#define HEADER_H

#define HEX     "0123456789abcdef"
#define HEXSIZE 16

int     open_file(char *file_name);
void    send_error(char *program_name, char *file_name);
void    ft_print(int type, char *str, int multi);
void    close_file(int *file);
char    *read_file(int *file, int len);
void    print_hex(unsigned char c, int last);
int     file_len(int *file);
void    break_line_print();
void    print_address(char *address, int line);
void    print_len_file(int len);
void    ft_print_text(int type, char *str, int last);

#endif