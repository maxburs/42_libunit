NAME = framework.a

all: $(NAME)

$(NAME): libft/
	cd libft && make
	cp libft/libft.a framework.a


clean:
	cd libft && $(MAKE) fclean
fclean: clean
	rm -f $(NAME)
re: fclean all

.PHONY: clean fclean re