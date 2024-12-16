/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putposnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:48:36 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/16 10:23:59 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putposnbr(unsigned int nbr)
{
	char	*str;
	int		length;

	str = ft_itoa(nbr);
	length = ft_strlen(str);
	write(STD_OUT, str, length);
	free (str);
	return (length);
}
