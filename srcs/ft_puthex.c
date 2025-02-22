/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 01:39:59 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/30 18:50:39 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_puthex(unsigned int nbr, int selector)
{
	char	*str;
	size_t	count;

	if (selector == 0)
		str = ft_uitoa_base(nbr, BASE_16_LOWERCASE);
	else
		str = ft_uitoa_base(nbr, BASE_16_UPPERCASE);
	count = ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (count);
}
