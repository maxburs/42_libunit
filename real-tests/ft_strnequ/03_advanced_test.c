/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_advanced_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:02:00 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 23:34:00 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strnequ.h>

int		ft_strnequ_03_advanced_test(void)
{
	int		result;
	char	*s;
	char	*b;

	s = strdup("meow");
	b = strdup("meows");
	result = 0;
	result += ft_strnequ(s, s, -1) != 1 ? 1 : 0;
	result += ft_strnequ(s, b, -1) != 1 ? 1 : 0;
	return (result ? -1 : 0);
}
