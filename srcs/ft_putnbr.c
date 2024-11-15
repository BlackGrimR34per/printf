/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:50:51 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/15 21:36:38 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

int	ft_putnbr(int nbr)
{
	char	*str;
	int		length;

	str = ft_itoa(nbr);
	length = ft_strlen(str);
	write(1, str, length);
	free (str);
	return (length);
}
