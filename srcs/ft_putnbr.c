/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:50:51 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 16:43:59 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

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
