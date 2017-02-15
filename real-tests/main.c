/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:00:44 by mburson           #+#    #+#             */
/*   Updated: 2017/02/13 21:01:05 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strdup.h>
#include <ft_strnequ.h>
#include <ft_strstr.h>
#include <ap_itoa_base.h>
#include <framework.h>

int		main(void)
{
	print_header();
	ft_strdup_00_launcher();
	ft_strnequ_00_launcher();
	ft_strstr_00_launcher();
	ap_itoa_base_00_launcher();
	return (0);
}
