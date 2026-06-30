NAME		= libftprintf.a
SRCS		= ft_printf.c put_c.c put_s.c put_n.c put_x.c put_p.c
OBJS		= ${SRCS:.c=.o}
HEADER_DIR	= ./
CFLAGS		= -Wall -Wextra -Werror
CPPFLAGS	= -I ${HEADER_DIR}
RM			= rm -f

all: ${NAME}

${NAME}: ${OBJS}
	@ar rcs ${NAME} $^
clean:
	@${RM} ${OBJS}
fclean: clean
	@${RM} ${NAME}
re: fclean all

tests:
	@cc ${CFLAGS} -o ft_printf main.c -L. -lftprintf -I./
# 	valgrind --leak-check=full --show-leak-kinds=all ./tests.out

.PHONY: all clean fclean re tests
