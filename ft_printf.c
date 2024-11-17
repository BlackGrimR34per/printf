/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 17:57:47 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 20:34:44 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

#include <stdio.h>

int	ft_handle_specifier(char c, va_list *ap)
{
	if (!ap)
		return (0);
	else if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	if (c == 'p')
		return (ft_putaddress(va_arg(*ap, void *)));
	if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	if (c == 'u')
		return (ft_putnbr(va_arg(*ap, unsigned int)));
	if (c == 'x')
		return (ft_puthex(va_arg(*ap, int), LOWERCASE_SELECTOR));
	if (c == 'X')
		return (ft_puthex(va_arg(*ap, int), UPPERCASE_SELECTOR));
	if (c == '%')
		return (ft_putchar('%'));
	else
		return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	if (format == NULL)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = 0;
	va_start(ap, format);
	while (*format)
	{
		if (*format == '%')
			count += ft_handle_specifier(*(++format), &ap);
		else
			count += write(1, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
