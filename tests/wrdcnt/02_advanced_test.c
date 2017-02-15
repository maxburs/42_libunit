/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_bigger_str_test.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:01:17 by mburson           #+#    #+#             */
/*   Updated: 2017/02/12 23:01:19 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <wrdcnt.h>

int		wrdcnt_02_advanced_test(void)
{
	if (ft_wrdcnt("word ", ' ') != 1
		|| ft_wrdcnt(" test test test", ' ') != 3
		|| ft_wrdcnt(" happy happy happy happy ", 'p') != 5)
		return (-1);
	return (0);
}
