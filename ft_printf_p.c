/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_p.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/13 13:03:30 by kharuya           #+#    #+#             */
/*   Updated: 2024/11/13 13:53:40 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_printf_address(uintptr_t ptr_data)
{
	const char 	*hex_num;
	char 		res[16+1];
	int			index;
	int			start;

	hex_num = HEX_LOWER;
	index = 16;
	res[index--] = '\0';
	if (ptr_data == 0)
		res[index--] = '0';
	while (ptr_data)
	{
		res[index--] = hex_num[ptr_data % 16];
		ptr_data /= 16;
	}
	start = index + 1;
	while (res[start])
		ft_putchar_fd(res[start++], 1);
	return (16 - index - 1);

}

int	ft_printf_p(void *ptr)
{
	uintptr_t	ptr_data;
	int 		count;

	ptr_data = (uintptr_t)ptr;
	count = 2;
	write(1, "0x", 2);
	count += ft_printf_address(ptr_data);
	return (count);
}

