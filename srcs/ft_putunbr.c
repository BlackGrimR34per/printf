/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunbr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 22:57:56 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/30 18:51:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putunbr(unsigned int nbr)
{
	char	*str;
	size_t	count;

	str = ft_uitoa_base(nbr, BASE_10);
	count = ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (count);
}
