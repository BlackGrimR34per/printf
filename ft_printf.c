/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:57:47 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/14 23:30:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_handle_specifier(char c, va_list ap)
{
	if (c == 'c')
		return (ft_putchar(va_arg(ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(ap, char *)));
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (!format)
		return (0);
	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_handle_specifier(*(++format), ap);
		else
			write(1, format, 1);
		count++;
		format++;
	}
	va_end(ap);
	return (count);
}

int	main(void)
{
	printf("\n%d\n", ft_printf("I have %s apples for you", "ABD"));
	return (0);
}
