NAME = ../wrdcnt.a

SRCS = 00_launcher.c \
		01_basic_test.c \
#		02_null_test.c \
		03_bigger_str_test.c

OBJS = $(SRCS:.c=.o)

HEADERS = -I ../../framework -I ../../framework/libft

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