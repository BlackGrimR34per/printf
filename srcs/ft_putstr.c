/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysheraun <ysheraun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:56:43 by yosherau          #+#    #+#             */
/*   Updated: 2025/01/29 18:16:18 by ysheraun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

int	ft_putstr(char *str)
{
	if (!str)
		return (write(STD_OUT, STR_NULL, ft_strlen(STR_NULL)));
	return (write(STD_OUT, str, ft_strlen(str)));
}
