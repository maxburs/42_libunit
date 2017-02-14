/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   01_basic_test.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 21:26:36 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 23:16:18 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strnequ.h>

int		ft_strnequ_01_basic_test(void)
{
	int		result;

	result = 0;
	result += ft_strnequ("meow", "meow", 4) != 1 ? 1 : 0;
	result += ft_strnequ("meoW", "meoM", 4) != 0 ? 1 : 0;
	return (result ? -1 : 0);
}
