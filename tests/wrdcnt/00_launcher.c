/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:00:57 by mburson           #+#    #+#             */
/*   Updated: 2017/02/14 14:37:45 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <framework.h>
#include <libft.h>
#include <wrdcnt.h>

int		wrdcnt_00_launcher(void)
{
	t_result	result;

	ft_putstr("WRDCNT:\n");
	result.passed = 0;
	result.tried = 0;
	run_test(&result, "pass", &wrdcnt_01_basic_test);
	run_test(&result, "fail", &wrdcnt_02_null_test);
	run_test(&result, "segmentation fault", &wrdcnt_03_bigger_str_test);
	run_test(&result, "bus error", &wrdcnt_04_bus_error_test);
	print_result(&result);
	return (0);
}
