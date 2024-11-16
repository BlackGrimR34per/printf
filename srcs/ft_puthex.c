/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:15:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 19:15:43 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	ft_puthex(int nbr, int selector)
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
