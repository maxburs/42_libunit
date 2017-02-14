/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 21:50:19 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 21:52:08 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strdup.h>

int		ft_strdup_02_null_test(void)
{
	char	*null;

	null = NULL;
	ft_strdup(null);
	return (0);
}
