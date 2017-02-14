/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   02_null_test.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aphan <aphan@student.42.us.org>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/13 21:50:19 by aphan             #+#    #+#             */
/*   Updated: 2017/02/13 23:28:59 by aphan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <libft.h>
#include <ft_strnequ.h>

int		ft_strnequ_02_null_test(void)
{
	char	*null;
	size_t	*inull;

	null = NULL;
	inull = NULL;
	ft_strnequ(null, "meow", 1);
	ft_strnequ("meow", null, 1);
	ft_strnequ("meow", "meow", *inull);
	return (0);
}
