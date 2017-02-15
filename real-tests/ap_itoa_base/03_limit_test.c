/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_limit_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 20:03:09 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 20:43:08 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ap_itoa_base.h>

int		ap_itoa_base_03_limit_test(void)
{
	int		result;

	result = 0;
	result += strcmp("2147483647", ap_itoa_base(2147483647, 10)) ? 1 : 0;
	result += strcmp("-2147483648", ap_itoa_base(-2147483648, 10)) ? 1 : 0;
	result += strcmp("0", ap_itoa_base(0, 10)) ? 1 : 0;
	result += strcmp("1", ap_itoa_base(1, 10)) ? 1 : 0;
	result += strcmp("-1", ap_itoa_base(-1, 10)) ? 1 : 0;
	return (result ? -1 : 0);
}
