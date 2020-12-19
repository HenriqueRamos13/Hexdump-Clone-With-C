CC	=	gcc

SRCF	=	./src/

SRCS	=	main.c ${SRCF}ft_print.c ${SRCF}open_file.c ${SRCF}send_error.c ${SRCF}print_address.c ${SRCF}print_len_file.c ${SRCF}break_line_print.c ${SRCF}close_file.c ${SRCF}file_len.c ${SRCF}read_file.c ${SRCF}print_hex.c

HEADERS	=	./includes/

OBJS	=	${SRCS:.c=.o}

FLAGS	=	-Wall -Werror -Wextra

NAME	=	hexdump

RM		=	rm -rf

${NAME}	:	${OBJS}
			${CC} ${FLAGS} -I ${HEADERS} ${OBJS} -o ${NAME} 

all		:	${NAME}

clean	:	
			${RM} ${OBJS}

fclean	:	clean
			${RM} ${OBJS} ${NAME}

re		:	fclean all

sanitize:	${OBJS}
			${CC} ${FLAGS} -I ${HEADERS} ${OBJS} -o ${NAME} -fsanitize=address -g

.PHONY	:	all clean fclean
