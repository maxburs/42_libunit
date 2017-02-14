/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_advanced_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:02:00 by aphan             #+#    #+#             */
/*   Updated: 2017/02/14 15:50:21 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strdup.h>

int		ft_strdup_04_more_test(void)
{
	int		result;
	char	*s1;
	char	*s2;

	s1 = strdup("meow");
	s2 = ft_strdup(s1);
	result = 0;
	result += !memcmp(s1, s2, 100) ? 1 : 0;
	return (result ? -1 : 0);
}
