/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_uitoa_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:02:21 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/30 19:08:56 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

char	*ft_uitoa_base(unsigned long nbr, char *base)
{
	char	*str;
	int		nbrlen;
	size_t	baselen;

	baselen = ft_strlen(base);
	nbrlen = ft_unbrlen(nbr, baselen);
	str = (char *)malloc(sizeof(char) * (nbrlen + 1));
	if (!str)
		return (NULL);
	str[nbrlen--] = '\0';
	if (nbr == 0)
		str[nbrlen] = '0';
	while (nbr > 0)
	{
		str[nbrlen--] = base[(nbr % baselen)];
		nbr /= baselen;
	}
	return (str);
}
