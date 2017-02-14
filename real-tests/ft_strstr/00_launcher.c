/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:00:57 by mburson           #+#    #+#             */
/*   Updated: 2017/02/14 15:30:55 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <framework.h>
#include <libft.h>
#include <ft_strstr.h>

int		ft_strstr_00_launcher(void)
{
	t_result	result;

	ft_putstr("FT_STRSTR:\n");
	result.passed = 0;
	result.tried = 0;
	run_test(&result, "basic", &ft_strstr_01_basic_test);
	run_test(&result, "null", &ft_strstr_02_null_test);
	run_test(&result, "advanced", &ft_strstr_03_advanced_test);
	run_test(&result, "empty", &ft_strstr_04_empty_test);
	print_result(&result);
	return (0);
}
