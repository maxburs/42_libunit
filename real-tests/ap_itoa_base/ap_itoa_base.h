/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ap_itoa_base.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mburson <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 21:26:57 by mburson           #+#    #+#             */
/*   Updated: 2017/02/14 21:28:15 by mburson          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AP_ITOA_BASE_H
# define AP_ITOA_BASE_H

char	*ap_itoa_base(int value, int base);
int		ap_itoa_base_00_launcher(void);
int		ap_itoa_base_01_basic_test(void);
int		ap_itoa_base_02_null_test(void);
int		ap_itoa_base_03_limit_test(void);
int		ap_itoa_base_04_negative_test(void);

#endif
