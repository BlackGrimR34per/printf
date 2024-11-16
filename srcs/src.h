/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   src.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 23:12:01 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 19:12:37 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SRC_H
# define SRC_H

# include <unistd.h>
# include <stdlib.h>

char	*ft_itoa_base(int n, char *base);
char	*ft_itoa(int n);
int		ft_putchar(char c);
int		ft_puthex(int nbr, int selector);
int		ft_putnbr(int nbr);
int		ft_putstr(char *str);
int		ft_strlen(char *str);

#endif