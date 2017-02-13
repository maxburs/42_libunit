NAME = libunit

SRCS = tests/main.c

LIBS = $(addprefix tests/, \
	wrdcnt.a \
)

FRMWRK = framework/framework.a

DIRS = $(LIBS:.a=)

OBJS = $(SRCS:.c=.o)

HEADERS = -I framework -I framework/libft $(addprefix -I ,$(DIRS))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBS) $(FRMWRK)
	gcc $(CFLAGS) -o $@ $^

%.o: %.c
	gcc $(CFLAGS) $(HEADERS) -c -o $@ $<

$(FRMWRK): framework
	cd framework && $(MAKE)

tests/%.a: tests/%
	cd $< && $(MAKE)

clean:
	rm -f $(LIBS)
	$(foreach dir,$(DIR), cd $dir && $MAKE fclean)
	cd framework && $(MAKE) fclean
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean
