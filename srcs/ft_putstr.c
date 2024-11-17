/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:20:58 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 20:34:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putstr(char *str)
{
	int	count;

	if (!str)
		return (0);
	count = ft_strlen(str);
	if (count == 0)
		return (0);
	return (write(1, str, count));
}
