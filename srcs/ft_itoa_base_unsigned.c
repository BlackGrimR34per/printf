/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base_unsigned.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/17 19:00:39 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/17 19:02:48 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:17:11 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/17 18:00:31 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

static size_t	ft_nb_len(unsigned long n, int divisor)
{
	size_t	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= -1;
	}
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= divisor;
	}
	return (len);
}

char	*ft_itoa_base_unsigned(unsigned long n, char *base)
{
	int				nbr_len;
	int				base_len;
	char			*output;
	unsigned long	nbr;

	nbr = n;
	base_len = ft_strlen(base);
	nbr_len = ft_nb_len(nbr, base_len);
	output = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!output)
		return (0);
	if (nbr < 0)
		nbr *= -1;
	output[nbr_len--] = '\0';
	while (nbr > 0)
	{
		output[nbr_len--] = base[(nbr % base_len)];
		nbr /= base_len;
	}
	if (n == 0)
		output[nbr_len] = '0';
	if (n < 0)
		output[nbr_len] = '-';
	return (output);
}