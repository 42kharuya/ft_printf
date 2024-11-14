/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/08 02:58:44 by kharuya           #+#    #+#             */
/*   Updated: 2024/11/13 20:40:41 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int ft_printf_format(const char format, va_list args)
{
	int print_char;

	print_char = 0;
	if (format == 'c')
		print_char += ft_printf_char(va_arg(args, int));
	else if (format == 's')
		print_char += ft_printf_str(va_arg(args, char *));
	else if(format == 'p')
		print_char += ft_printf_p(va_arg(args, void *));
	else if (format == 'd' || format == 'i')
		print_char += ft_printf_int(va_arg(args, int));
	else if(format == 'u')
		print_char += ft_printf_u(va_arg(args, unsigned int));
	else if(format == 'x' || format == 'X')
		print_char += ft_printf_x(va_arg(args, unsigned int), format);
	else if(format== '%')
		print_char += ft_printf_char('%');
	return (print_char);
}

int	ft_printf(const	char *format, ...)
{
	va_list	args;
	size_t	count;

	count = 0;
	if (!format)
		return (-1);
	va_start(args, format);
	while (*format)
	{
		if (*format != '%')
			count += ft_printf_char(*format);
		else if (*format == '%' && *(format + 1))
			count += ft_printf_format(*(++format), args);
		if (*format)
			format++;
	}
	va_end(args);
	return (count);
}
