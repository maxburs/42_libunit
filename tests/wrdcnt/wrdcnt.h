/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrdcnt.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:23:02 by mburson           #+#    #+#             */
/*   Updated: 2017/02/14 21:27:16 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRDCNT_H
# define WRDCNT_H

# include <string.h>

size_t	ft_wrdcnt(const char *str, char split);
int		wrdcnt_00_launcher(void);
int		wrdcnt_01_basic_test(void);
int		wrdcnt_02_null_test(void);
int		wrdcnt_03_bigger_str_test(void);
int		wrdcnt_04_bus_error_test(void);

#endif
