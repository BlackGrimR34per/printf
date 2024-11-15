/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:22:27 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/14 23:27:45 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

size_t	ft_strlen(char *str)
{
	size_t	count;

	count = 0;
	while (*str++)
		count++;
	return (count);
}
