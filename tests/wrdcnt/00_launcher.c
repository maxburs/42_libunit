/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:00:57 by mburson           #+#    #+#             */
/*   Updated: 2017/02/12 23:00:59 by mburson          ###   ########.fr       */
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
	run_test(&result, "basic", &wrdcnt_01_basic_test);
	run_test(&result, "null", &wrdcnt_02_null_test);
	run_test(&result, "bigger string", &wrdcnt_03_bigger_str_test);
	return (0);
}
