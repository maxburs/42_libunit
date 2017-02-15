/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 21:26:36 by aphan             #+#    #+#             */
/*   Updated: 2017/02/14 14:54:36 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strstr.h>

int		ft_strstr_01_basic_test(void)
{
	int		result;

	result = 0;
	result += strcmp("w", ft_strstr("abc def meow", "w")) ? 1 : 0;
	result += strcmp("meow", ft_strstr("abc def meow", "meow")) ? 1 : 0;
	result += ft_strstr("abc def meow", "z") != 0 ? 1 : 0;
	return (result ? -1 : 0);
}
