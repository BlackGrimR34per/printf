/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:35:54 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/30 18:51:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putnbr(int nbr)
{
	char	*str;
	size_t	count;

	str = ft_itoa(nbr);
	count = ft_strlen(str);
	ft_putstr(str);
	free(str);
	return (count);
}
