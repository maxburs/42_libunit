/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   04_empty_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 15:20:28 by aphan             #+#    #+#             */
/*   Updated: 2017/02/14 15:28:03 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strstr.h>

int		ft_strstr_04_empty_test(void)
{
	int		result;
	char	*little;
	char	*big;

	little = "\0";
	big = strdup("i'm a cat, meow!");
	result = 0;
	result += big != ft_strstr(big, little) ? 1 : 0;
	return (result ? -1 : 0);
}
