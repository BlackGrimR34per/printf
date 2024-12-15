/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:15:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/14 20:32:32 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

static size_t	ft_nb_len(unsigned int n, int divisor)
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

static char	*ft_itoa_base_pos(unsigned int n, char *base)
{
	int				nbr_len;
	int				base_len;
	char			*output;
	unsigned int	nbr;

	nbr = n;
	base_len = ft_strlen(base);
	nbr_len = ft_nb_len(nbr, base_len);
	output = (char *)malloc(sizeof(char) * (nbr_len + 1));
	if (!output)
		return (0);
	if (nbr < 0)
		nbr = nbr * -1;
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

int	ft_puthex(unsigned int nbr, int selector)
{
	char	*hex_bases[2];
	char	*str;
	int		length;

	hex_bases[0] = "0123456789abcdef";
	hex_bases[1] = "0123456789ABCDEF";
	str = ft_itoa_base_pos(nbr, hex_bases[selector]);
	length = ft_putstr(str);
	free (str);
	return (length);
}
