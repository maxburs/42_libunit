NAME = ../ft_strdup.a

SRCS = \
		ft_strdup.c \
		00_launcher.c \
		01_basic_test.c \
		02_null_test.c \
		03_advanced_test.c \
		04_more_test.c \

OBJS = $(SRCS:.c=.o)

HEADERS = -I ../../framework -I ../../framework/libft -I .

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	ar rc $@ $^
	ranlib $@

%.o: %.c
	gcc $(CFLAGS) $(HEADERS) -c -o $@ $<

clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(CHECKER) $(NAME)
re: fclean all

.PHONY: all clean fclean
