#ifndef FRAMEWORK_H
# define FRAMEWORK_H

# include <string.h>

typedef struct		s_result
{
	size_t		passed;
	size_t		tried;
}					t_result;

void				run_test(t_result *result, char const *name,
														int (*test)(void));
void				print_result(t_result *result);

#endif
