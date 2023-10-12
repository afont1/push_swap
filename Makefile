SRCS =	ps_command.c \
		ps_command2.c \
		ps_command3.c \
		ps_command4.c \
		ps_command5.c \
		push_swap.c \
		move_a.c \
		move_b.c \
		calculate.c \
		testmove_a.c \
		testmove_b.c \
		to_b.c \
		to_a.c \

OBJS = $(SRCS:.c=.o)

NAME = push_swap

all : $(NAME)

$(NAME): $(OBJS)
	@make -C ft_printf
	gcc -g -Wall -Werror -Wextra -I include $(OBJS) ft_printf/libftprintf.a -o $(NAME)

clean:
	@make clean -C ft_printf
	rm -rf $(OBJS)

fclean: clean
	@make fclean -C ft_printf
	rm -rf push_swap

re: fclean all

.PHONY: all clean fclean re
