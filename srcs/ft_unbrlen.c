/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unbrlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/29 23:08:18 by ysheraun          #+#    #+#             */
/*   Updated: 2025/01/30 19:08:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

size_t	ft_unbrlen(unsigned long nbr, size_t baselen)
{
	size_t	len;

	len = 0;
	if (nbr == 0)
		len++;
	while (nbr != 0)
	{
		len++;
		nbr /= baselen;
	}
	return (len);
}
