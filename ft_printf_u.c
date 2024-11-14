/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_u.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kharuya <kharuya@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 18:56:11 by kharuya           #+#    #+#             */
/*   Updated: 2024/11/11 19:46:12 by kharuya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	*ft_zero_handle(void)
{
	char	*ans;

	ans = (char *)malloc(sizeof(char) * 2);
	if (!ans)
		return (NULL);
	ans[0] = '0';
	ans[1] = '\0';
	return (ans);
}

static size_t	ft_count_digits(unsigned int u)
{
	int	res_digit;

	res_digit = 0;
	while (u != 0)
	{
		u /= 10;
		res_digit++;
	}
	return (res_digit);
}

static int	ft_divide_count(int count)
{
	int	divide;
	int	multiplier;

	divide = 1;
	multiplier = count - 1;
	while (multiplier-- > 0)
		divide *= 10;
	return (divide);
}

static char	*ft_itoa_make(char *ans,unsigned int u,	size_t count)
{
	size_t	i;
	int		divide;
	int		digit;

	i = 0;
	divide = ft_divide_count(count);
	while (divide > 0)
	{
		digit = u / divide;
		ans[i++] = digit + '0';
		u = u % divide;
		divide /= 10;
	}
	ans[i] = '\0';
	return (ans);
}


static	char *ft_itoa_unsigned(unsigned int u)
{
	size_t	count;
	char	*ans;

	if (u == 0)
		return (ft_zero_handle());
	count = ft_count_digits(u);
	ans = (char *)malloc(sizeof(char) * (count + 1));
	if (!ans)
		return (NULL);
	return (ft_itoa_make(ans, u, count));
}

int	ft_printf_u(unsigned int u)
{
	char *res;
	int print_char;

	res = ft_itoa_unsigned(u);
	print_char = ft_printf_str(res);
	free(res);
	return (print_char);
}