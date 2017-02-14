NAME = ../ap_itoa_base.a

SRCS = ap_itoa_base.c \
		00_launcher.c \
		01_basic_test.c \
		02_null_test.c \
		03_limit_test.c \
		04_negative_test.c

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
