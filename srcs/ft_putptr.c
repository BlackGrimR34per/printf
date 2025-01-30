/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/30 18:09:03 by yosherau          #+#    #+#             */
/*   Updated: 2025/01/30 19:12:24 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putptr(void *ptr)
{
	char	*str;
	size_t	count;

	if (!ptr)
		return (ft_putstr(THE_ABSENCE_OF_VALUE));
	str = ft_uitoa_base((unsigned long)ptr, BASE_16_LOWERCASE);
	count = ft_putstr("0x") + ft_putstr(str);
	free(str);
	return (count);
}
