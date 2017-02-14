/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 19:53:52 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 20:34:56 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ap_itoa_base.h>

int		ap_itoa_base_02_null_test(void)
{
	int		*null;

	null = NULL;
	ap_itoa_base(*null, 2);
	ap_itoa_base(42, *null);	
	return (0);
}
