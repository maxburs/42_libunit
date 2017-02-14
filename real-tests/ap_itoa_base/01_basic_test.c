/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:54:00 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 21:08:57 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ap_itoa_base.h>

int		ap_itoa_base_01_basic_test(void)
{
	int 	result;

	result = 0;
	result += strcmp("42", ap_itoa_base(42, 10)) ? 1 : 0;
	result += strcmp("101010", ap_itoa_base(42, 2)) ? 1 : 0;
	result += strcmp("1120", ap_itoa_base(42, 3)) ? 1 : 0;
	result += strcmp("52", ap_itoa_base(42, 8)) ? 1 : 0;
	result += strcmp("2A", ap_itoa_base(42, 16)) ? 1 : 0;
	return (result ? -1 : 0);
}
