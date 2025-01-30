/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_nbr_len.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysheraun <ysheraun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 20:55:43 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/29 20:59:06 by ysheraun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

size_t	ft_nbrlen(int nbr)
{
	size_t	len;

	len = 0;
	if (nbr < 0)
	{
		len++;
		nbr = -nbr;
	}
	if (nbr == 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= 10;
	}
	return (len);
}
