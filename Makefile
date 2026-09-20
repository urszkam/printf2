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

%.o: %.c 
	@${CC} ${CFLAGS} ${CPPFLAGS} -c $^ -o $@

clean:
	@${RM} ${OBJS}
fclean: clean
	@${RM} ${NAME}
re: fclean all

tests: ${NAME}
	@${MAKE} -C tests tests

bonus-tests: bonus
	@${MAKE} -C tests bonus-tests

.PHONY: all bonus clean fclean re tests bonus-tests
