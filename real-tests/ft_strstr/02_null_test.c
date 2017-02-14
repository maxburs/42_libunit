/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 21:50:19 by aphan             #+#    #+#             */
/*   Updated: 2017/02/14 15:02:25 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strstr.h>

int		ft_strstr_02_null_test(void)
{
	char	*null;

	null = NULL;
	ft_strstr(null, "meow");
	ft_strstr("meow", null);
	return (0);
}
