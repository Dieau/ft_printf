/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_hex_conv.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:44 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/29 10:24:24 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	ft_print_hex(char *hexadecimal, int j, int format)
{
	int	i;

	i = j - 1;
	while (i >= 0)
	{
		if (format == 1)
			ft_putchar(ft_tolower(hexadecimal[i]));
		else if (format == 2)
			ft_putchar(hexadecimal[i]);
		i--;
	}
	return (0);
}

int	ft_hex_conv(unsigned int decimal, int format)
{
	unsigned int		quotient;
	unsigned int		restes;
	int					j;
	char				hexadecimal[20];
	int					count;

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
	count = ft_strlen(hexadecimal);
	ft_print_hex(hexadecimal, j, format);
	return (count);
}
