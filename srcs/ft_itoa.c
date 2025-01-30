/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:49:37 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/30 18:51:09 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

char	*ft_itoa(int nbr)
{
	char	*str;
	size_t	nbrlen;
	long	tempnbr;

	nbrlen = ft_nbrlen(nbr);
	tempnbr = nbr;
	str = (char *)malloc(sizeof(char) * (nbrlen + 1));
	if (!str)
		return (NULL);
	if (tempnbr < 0)
		tempnbr = -tempnbr;
	str[nbrlen--] = '\0';
	while (tempnbr > 0)
	{
		str[nbrlen--] = (tempnbr % 10) + 48;
		tempnbr /= 10;
	}
	if (nbr == 0)
		str[nbrlen] = '0';
	if (nbr < 0)
		str[nbrlen] = '-';
	return (str);
}
