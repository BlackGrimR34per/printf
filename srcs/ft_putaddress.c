/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:52:37 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/17 19:03:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putaddress(void *ptr)
{
	char			*hex_base;
	char			*str;
	int				length;
	unsigned long	address;

	address = (unsigned long)ptr;
	hex_base = "0123456789abcdef";
	str = ft_itoa_base_unsigned(address, hex_base);
	ft_putstr("0x");
	length = ft_putstr(str);
	free (str);
	return (length + 2);
}
