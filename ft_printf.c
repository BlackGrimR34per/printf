/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:04:40 by yosherau          #+#    #+#             */
/*   Updated: 2025/01/30 18:50:03 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_handle_specifier(char c, va_list *ap)
{
	if (!ap)
		return (0);
	else if (c == 'c')
		return (ft_putchar(va_arg(*ap, int)));
	else if (c == 's')
		return (ft_putstr(va_arg(*ap, char *)));
	else if (c == 'p')
		return (ft_putptr(va_arg(*ap, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr(va_arg(*ap, int)));
	else if (c == 'u')
		return (ft_putunbr(va_arg(*ap, unsigned int)));
	else if (c == 'x')
		return (ft_puthex(va_arg(*ap, unsigned long), LOWERCASE_SELECTOR));
	else if (c == 'X')
		return (ft_puthex(va_arg(*ap, unsigned long), UPPERCASE_SELECTOR));
	else if (c == '%')
		return (ft_putchar('%'));
	return (0);
}

int	ft_printf(const char *format, ...)
{
	va_list	ap;
	int		count;

	va_start(ap, format);
	count = 0;
	while (*format)
	{
		if (*format == '%')
			count += ft_handle_specifier(*(++format), &ap);
		else
			count += write(STD_OUT, format, 1);
		format++;
	}
	va_end(ap);
	return (count);
}
