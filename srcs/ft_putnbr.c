/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:50:51 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/16 10:23:54 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putnbr(int nbr)
{
	char	*str;
	int		length;

	str = ft_itoa(nbr);
	length = ft_strlen(str);
	write(STD_OUT, str, length);
	free (str);
	return (length);
}
