/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:59:44 by kharuya           #+#    #+#             */
/*   Updated: 2024/11/11 18:05:01 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_int(int d)
{
	char *res;
	int print_char;

	res = ft_itoa(d);
	print_char = ft_printf_str(res);
	free(res);
	return (print_char);
}