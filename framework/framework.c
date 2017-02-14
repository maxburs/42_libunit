/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   framework.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 02:06:42 by mburson           #+#    #+#             */
/*   Updated: 2017/02/13 21:31:33 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <unistd.h>
#include <sys/wait.h>
#include <signal.h>
#include <framework.h>
#include <stdlib.h>

static void		handle_signal(int status)
{
	if (status == SIGSEGV)
	{
		ft_putstr("SEGV");
	}
	else if (status == SIGBUS)
	{
		ft_putstr("BUSE");
	}
	else
	{
		ft_putstr("unknown signal with code: ");
		ft_putnbr(status);
	}
}

static void		handle_exit(t_result *result, int status)
{
	if (status == 0)
	{
		result->passed++;
		ft_putstr("OK");
	}
	else if (status == -1)
	{
		ft_putstr("KO");
	}
	else
	{
		ft_putstr("unknown function result with code: ");
		ft_putnbr(status);
	}
}

void			print_result(t_result *result)
{
	ft_putnbr((int)(result->passed));
	ft_putstr("/");
	ft_putnbr((int)(result->tried));
	ft_putstr(" tests passed\n");
}

void			run_test(t_result *result, char const *name, int (*test)(void))
{
	int		status;
	pid_t	f;

	result->tried++;
	ft_putstr(" > ");
	ft_putstr(name);
	ft_putstr(": ");
	f = fork();
	if (f == 0)
		exit((*test)());
	else if (f == -1)
		ft_putstr("FORK FAILED");
	else
	{
		wait(&status);
		if (WIFSIGNALED(status))
			handle_signal(WTERMSIG(status));
		else if (WIFEXITED(status))
			handle_exit(result, WEXITSTATUS(status));
		else
			ft_putstr("unknown wait result");
	}
	ft_putchar('\n');
}
