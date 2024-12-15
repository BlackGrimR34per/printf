/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:12:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/14 20:32:52 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa_base(long long n, char *base);
char	*ft_itoa(long n);
int		ft_putaddress(void *ptr);
int		ft_putchar(char c);
int		ft_puthex(unsigned int nbr, int selector);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
int		ft_strlen(char *str);
int		ft_putposnbr(unsigned int nbr);

#endif