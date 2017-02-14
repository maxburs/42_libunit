#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include <string.h>

# define RESET write(1, "\x1b[0m", 4);
# define GREEN write(1, "\x1b[32m", 5);
# define RED write(1, "\x1b[31m", 5);
# define INVERSE write(1, "\x1b[7m", 4);
# define BOLD write(1, "\x1b[1m", 4);

typedef struct		s_result
{
	size_t		passed;
	size_t		tried;
}					t_result;

void				run_test(t_result *result, char const *name,
														int (*test)(void));
void				print_result(t_result *result);

#endif
