/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putposnbr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysheraun <ysheraun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/14 19:48:36 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/15 23:16:11 by ysheraun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putposnbr(unsigned int nbr)
{
	char	*str;
	int		length;

	str = ft_itoa(nbr);
	length = ft_strlen(str);
	write(1, str, length);
	free (str);
	return (length);
}
