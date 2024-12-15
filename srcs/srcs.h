/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysheraun <ysheraun@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:12:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/12/15 23:14:02 by ysheraun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <unistd.h>
# include <stdlib.h>

# ifdef __APPLE__
#  define THE_ABSENCE_OF_VALUE "0x0"
# elif __linux__
#  define THE_ABSENCE_OF_VALUE "(nil)"
# endif

# define LOWERCASE_HEX "0123456789abcdef"
# define UPPERCASE_HEX "0123456789ABCDEF"

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