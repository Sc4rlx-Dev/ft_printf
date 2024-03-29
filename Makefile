CC = cc
CFLAGS = -Wall -Wextra -Werror
RM = rm -rf
NAME = libftprintf.a

SRCS = ft_print_ptr.c ft_print_unsigned.c ft_printf_utils.c ft_utilsV2.c ft_print_hex.c ft_printf.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@
	ar rsc $(NAME) $@

clean:
	$(RM) $(OBJS)
	
fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

.SECONDERY: $(OBJS)