NAME = tests

SRCS = main.c

OBJS = $(SRCS:.c=.o)

LIBS = \
	wrdcnt.a \

FRMWRK = ../framework/framework.a

FRMWRK_DIR = $(FRMWRK:framework.a=)

DIRS = $(LIBS:.a=)

HEADERS = -I ../framework -I ../framework/libft $(addprefix -I ,$(DIRS))

CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS) $(LIBS) $(FRMWRK)
	gcc $(CFLAGS) -o $@ $^

%.o: %.c
	gcc $(CFLAGS) $(HEADERS) -c -o $@ $<

$(FRMWRK): $(FRMWRK_DIR)
	cd $(FRMWRK_DIR) && $(MAKE)

%.a: %
	cd $< && $(MAKE)

clean:
	rm -f $(LIBS)
	$(foreach dir,$(DIRS), (cd $(dir) && $(MAKE) fclean);)
	cd $(FRMWRK_DIR) && $(MAKE) fclean
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: all clean fclean
