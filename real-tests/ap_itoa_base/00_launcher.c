/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   00_launcher.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:54:13 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 21:10:32 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <framework.h>
#include <libft.h>
#include <ap_itoa_base.h>

int		ap_itoa_base_00_launcher(void)
{
	t_result	result;

	ft_putstr("AP_ITOA_BASE:\n");
	result.passed = 0;
	result.tried = 0;
	run_test(&result, "basic", &ap_itoa_base_01_basic_test);
	run_test(&result, "null", &ap_itoa_base_02_null_test);
	run_test(&result, "int limits", &ap_itoa_base_03_limit_test);
	run_test(&result, "negative numbers", &ap_itoa_base_04_negative_test);
	print_result(&result);
	return (0);
}
