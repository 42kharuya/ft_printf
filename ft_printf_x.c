/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_xX.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 22:05:31 by kharuya           #+#    #+#             */
/*   Updated: 2024/12/08 01:04:41 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_x(unsigned int n, const char format)
{
	const char	*hex_num;
	int			count;

	count = 0;
	if (format == 'x')
		hex_num = HEX_LOWER;
	else if (format == 'X')
		hex_num = HEX_UPPER;
	else
		return (-1);
	if (n >= 16)
		count += ft_printf_x(n / 16, format);
	ft_putchar_fd(hex_num[n % 16], 1);
	return (count + 1);
}
