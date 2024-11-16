/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/12 18:00:27 by yosherau          #+#    #+#             */
/*   Updated: 2024/11/16 18:30:21 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>
# include "./srcs/srcs.h"

# define STD_OUT 1
# define LOWERCASE_SELECTOR 0
# define UPPERCASE_SELECTOR 1

int	ft_printf(const char *format, ...);

#endif