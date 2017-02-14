/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/12 23:00:44 by mburson           #+#    #+#             */
/*   Updated: 2017/02/12 23:00:48 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <wrdcnt.h>
#include <ft_strdup.h>
#include <ft_strnequ.h>
#include <ft_strstr.h>

static void		print_header(void)
{
	ft_putstr("*********************************\n");
	ft_putstr("**      42 - Unit Tests      ****\n");
	ft_putstr("*********************************\n");
}

int		main(void)
{
	print_header();
	wrdcnt_00_launcher();
	ft_strdup_00_launcher();
	ft_strnequ_00_launcher();
	ft_strstr_00_launcher();
	return (0);
}
