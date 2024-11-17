/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:12:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/17 21:01:05 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa_base_unsigned(unsigned long n, char *base);
char	*ft_itoa_base(long n, char *base);
char	*ft_itoa(long n);
int		ft_putaddress(void *ptr);
int		ft_putchar(char c);
int		ft_puthex(long nbr, int selector);
int		ft_putnbr(long nbr);
int		ft_putstr(char *str);
int		ft_strlen(char *str);

#endif