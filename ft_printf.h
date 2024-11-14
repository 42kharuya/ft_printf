/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:59:27 by kharuya           #+#    #+#             */
/*   Updated: 2024/11/13 13:05:23 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

//include
#include <stdio.h>
#include <stdarg.h>
#include "libft/libft.h"

//hex
# define HEX_UPPER	"0123456789ABCDEF"
# define HEX_LOWER	"0123456789abcdef"

//prototype

int ft_printf(const char *, ...);
int	ft_printf_char(char c);
int ft_printf_str(char *str);
int	ft_printf_int(int d);
int	ft_printf_u(unsigned int u);
int ft_printf_x(unsigned int n, const char format);
int	ft_printf_p(void *ptr);


#endif