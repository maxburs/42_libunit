/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ap_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/25 09:03:56 by exam              #+#    #+#             */
/*   Updated: 2017/02/13 20:32:28 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ap_itoa_base(int value, int base)
{
	int		flag;
	int		len;
	char	*str;
	int		v;

	if (base < 2 && base > 36)
		return (0);
	flag = (value < 0 && base == 10) ? 1 : 0;
	len = 1 + flag;
	v = value;
	while (v /= base)
		len++;
	str = (char *)malloc(sizeof(char) * (len + 1));
	str[0] = '-';
	str[len] = 0;
	while (len-- > flag)
	{
		v = (value < 0) ? -(value % base) : value % base;
		str[len] = (v > 9) ? v + 'A' - 10 : v + '0';
		value /= base;
	}
	return (str);
}
