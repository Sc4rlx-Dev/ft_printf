CC = cc
CFLAGS = -Wall -Wextra -Werror 
RM = rm -rf
NAME = libftprintf.a

SRCS = ft_print_hex.c ft_print_ptr.c ft_print_utils.c ft_print_utilsV2.c ft_print.c
OBJS = $(SRCS:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -c $^
	ar rc $(NAME) $(OBJS)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
