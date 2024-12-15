/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysheraun <ysheraun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 21:15:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/15 23:15:23 by ysheraun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "srcs.h"

static size_t	ft_nb_len(unsigned int n, int divisor)
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

int	ft_puthex(unsigned int nbr, int selector)
{
	char	*str;
	int		length;

	if (selector == 0)
		str = ft_itoa_base_pos(nbr, LOWERCASE_HEX);
	else
		str = ft_itoa_base_pos(nbr, UPPERCASE_HEX);
	length = ft_putstr(str);
	free (str);
	return (length);
}
