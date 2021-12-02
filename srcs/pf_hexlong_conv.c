/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_hexlong_conv.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:49 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/29 10:24:18 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_hex(char *hexadecimal, int j)
{
	int	i;
	int	count;

	i = j - 1;
	count = ft_strlen(hexadecimal);
	while (i >= 0)
	{
		ft_putchar(ft_tolower(hexadecimal[i]));
		i--;
	}
	return (count);
}

int	ft_hexlong_conv(unsigned long long decimal)
{
	unsigned long long		quotient;
	unsigned long long		restes;
	int						j;
	char					hexadecimal[20];
	int						count;

	j = 0;
	quotient = decimal;
	while (quotient != 0)
	{
		restes = quotient % 16;
		if (restes < 10)
			restes += 48;
		else
			restes += 55;
		hexadecimal[j] = restes;
		j++;
		quotient = quotient / 16;
	}
	hexadecimal[j] = '\0';
	count = ft_print_hex(hexadecimal, j);
	return (count);
}
