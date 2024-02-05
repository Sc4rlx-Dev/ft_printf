CC = cc
CFLAGS = -Wall -Wextra -Werror -I./includes/
RM = rm -rf
NAME = libftprintf.a

SRCS = ft_print_hex.c ft_print_ptr.c ft_print_utils.c ft_print_utilsV2.c ft_print.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(MAKE) -C ./libft
	cp libft/libft.a $(NAME)
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(MAKE) clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(MAKE) fclean -C ./libft
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re

