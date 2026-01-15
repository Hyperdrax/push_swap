NAME = push_swap
SRCS = $(wildcard src/*.c)
OBJS = $(SRCS:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror
RM = rm -f
LIBFT = ./libft/libft.a


all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C libft
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS) $(LIBFT)
	
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(MAKE) -C libft fclean

fclean: clean
	$(RM) $(NAME)

re: fclean all
.PHONY: all clean fclean re

