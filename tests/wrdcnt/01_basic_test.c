/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:01:03 by mburson           #+#    #+#             */
/*   Updated: 2017/02/12 23:01:07 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <wrdcnt.h>

int		wrdcnt_01_basic_test(void)
{
	if (ft_wrdcnt(" word ", ' ') != 1
		|| ft_wrdcnt(" test test test ", ' ') != 3
		|| ft_wrdcnt(" happy happy happy happy ", ' ') != 4)
		return (-1);
	return (0);
}
