/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:17:11 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 19:04:33 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "src.h"

static size_t	ft_nb_len(int n, int divisor)
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

char	*ft_itoa_base(int n, char *base)
{
	int		nbr_len;
	int		base_len;
	char	*output;
	long	nbr;

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
