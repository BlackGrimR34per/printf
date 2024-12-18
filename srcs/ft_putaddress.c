/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putaddress.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/16 15:52:37 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/16 10:13:35 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

static size_t	ft_nb_len(unsigned long int n, int divisor)
{
	size_t	len;

	len = 0;
	if (n == 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= divisor;
	}
	return (len);
}

static char	*ft_itoa_base_pos(unsigned long n, char *base)
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
	output[nbr_len--] = '\0';
	while (nbr > 0)
	{
		output[nbr_len--] = base[(nbr % base_len)];
		nbr /= base_len;
	}
	if (n == 0)
		output[nbr_len] = '0';
	return (output);
}

int	ft_putaddress(void *ptr)
{
	char			*str;
	int				length;
	unsigned long	address;

	if (!ptr)
	{
		ft_putstr(THE_ABSENCE_OF_VALUE);
		return (ft_strlen(THE_ABSENCE_OF_VALUE));
	}
	address = (unsigned long)ptr;
	str = ft_itoa_base_pos(address, LOWERCASE_HEX);
	ft_putstr("0x");
	length = ft_putstr(str);
	free (str);
	return (length + 2);
}
