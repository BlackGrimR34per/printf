/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:57:47 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/13 11:41:09 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

#include <stdio.h>

int	ft_printf(const char *format, ...)
{
	char	*ptr;
	int		count;

	ptr = (char *)format;
	count = 0;
	while (*format)
	{
		if (*format == '%')
		{
			if (*(format + 1) == '%')
				printf("%%\n");
			else if (*(format + 1) == 'c')
				handleCharacter();
		}
		else
			write(1, format, 1);
		count++;
		format++;
	}
}
void	ft_handleCharacter()
{

}


