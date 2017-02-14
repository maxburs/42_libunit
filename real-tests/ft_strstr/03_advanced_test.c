/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   03_advanced_test.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 22:02:00 by aphan             #+#    #+#             */
/*   Updated: 2017/02/14 15:10:33 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strstr.h>

int		ft_strstr_03_advanced_test(void)
{
	int		result;
	char	*little;
	char	*big;

	little = strdup("meow");
	big = strdup("i'm a cat, meow!");
	result = 0;
	result += (big + 11) != ft_strstr(big, little) ? 1 : 0;
	result += 0 != ft_strstr(little, big) ? 1 : 0;
	return (result ? -1 : 0);
}
