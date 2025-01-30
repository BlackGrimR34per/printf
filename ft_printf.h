/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yosherau <yosherau@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/27 16:04:48 by yosherau          #+#    #+#             */
/*   Updated: 2025/01/30 18:04:50 by yosherau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "./srcs/srcs.h"
# include <stdarg.h>

# define LOWERCASE_SELECTOR 0
# define UPPERCASE_SELECTOR 1

int	ft_printf(const char *format, ...);

#endif