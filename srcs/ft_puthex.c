/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:15:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/17 21:00:51 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_puthex(long nbr, int selector)
{
	char	*hex_bases[2];
	char	*str;
	int		length;

	hex_bases[0] = "0123456789abcdef";
	hex_bases[1] = "0123456789ABCDEF";
	str = ft_itoa_base(nbr, hex_bases[selector]);
	length = ft_putstr(str);
	free (str);
	return (length);
}
