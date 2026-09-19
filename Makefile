NAME		= libftprintf.a
SRCS		= ft_printf.c put_c.c put_s.c put_n.c put_x.c put_p.c
OBJS		= ${SRCS:.c=.o}
HEADER_DIR	= ./
CC			= cc
CFLAGS		= -Wall -Wextra -Werror
CPPFLAGS	= -I ${HEADER_DIR}
RM			= rm -f

all: ${NAME}

bonus: ${NAME}

${NAME}: ${OBJS}
	@ar rcs ${NAME} $^

${OBJS}: ${HEADER_DIR}ft_printf.h

clean:
	@${RM} ${OBJS}
fclean: clean
	@${RM} ${NAME}
re: fclean
	@${MAKE} all

tests: ${NAME}
	@cc ${CFLAGS} -o ft_printf main.c -L. -lftprintf -I./
# 	valgrind --leak-check=full --show-leak-kinds=all ./tests.out

.PHONY: all bonus clean fclean re tests
