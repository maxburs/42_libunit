/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:00:57 by mburson           #+#    #+#             */
/*   Updated: 2017/02/13 23:30:38 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <framework.h>
#include <libft.h>
#include <ft_strnequ.h>

int		ft_strnequ_00_launcher(void)
{
	t_result	result;

	ft_putstr("FT_STRNEQU:\n");
	result.passed = 0;
	result.tried = 0;
	run_test(&result, "basic", &ft_strnequ_01_basic_test);
	run_test(&result, "null", &ft_strnequ_02_null_test);
	run_test(&result, "advanced", &ft_strnequ_03_advanced_test);
	print_result(&result);
	return (0);
}
