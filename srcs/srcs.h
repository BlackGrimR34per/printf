/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   srcs.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 15:45:46 by yosherau          #+#    #+#             */
/*   Updated: 2025/01/30 18:49:19 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRCS_H
# define SRCS_H

# include <stdlib.h>
# include <unistd.h>

# define STD_OUT 1
# define STR_NULL "(null)"
# define BASE_10 "0123456789"
# define BASE_16_LOWERCASE "0123456789abcdef"
# define BASE_16_UPPERCASE "0123456789ABCDEF"

# ifdef __linux__
#  define THE_ABSENCE_OF_VALUE "(nil)"
# elif __APPLE__
#  define THE_ABSENCE_OF_VALUE "0x0"
# endif

char	*ft_itoa(int nbr);
size_t	ft_nbrlen(int nbr);
int		ft_putchar(char c);
int		ft_puthex(unsigned int nbr, int selector);
int		ft_putnbr(int nbr);
int		ft_putptr(void *ptr);
int		ft_putstr(char *str);
int		ft_putunbr(unsigned int nbr);
size_t	ft_strlen(char *str);
char	*ft_uitoa_base(unsigned long nbr, char *base);
size_t	ft_unbrlen(unsigned long nbr, size_t baselen);

#endif
