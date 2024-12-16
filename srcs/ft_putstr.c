/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:20:58 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/16 10:24:10 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (write(STD_OUT, "(null)", 6));
	count = ft_strlen(str);
	if (count == 0)
		return (0);
	return (write(STD_OUT, str, count));
}
