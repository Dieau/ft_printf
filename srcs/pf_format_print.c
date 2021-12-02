/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_format_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:18 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/26 15:36:30 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_cprintf(va_list args)
{
	char	c;
	int		count;

	c = ft_format_c(args);
	count = 1;
	ft_putchar(c);
	return (count);
}

int	ft_sprintf(va_list args)
{
	char	*s;
	int		count;

	s = ft_format_s(args);
	if (s == NULL)
	{
		ft_putstr("(null)");
		count = 6;
	}
	else
	{
		ft_putstr(s);
		count = ft_strlen(s);
	}
	return (count);
}

int	ft_dprintf(va_list args)
{
	int	d;
	int	count;

	d = ft_format_d(args);
	ft_putnbr(d);
	count = ft_intlen(d);
	return (count);
}

int	ft_pprintf(va_list args)
{
	unsigned long long	p;
	int					count;

	p = ft_format_p(args);
	ft_putstr("0x");
	count = 2;
	if (p == 0)
	{
		ft_putchar('0');
		count += 1;
	}
	else
		count += ft_hexlong_conv(p);
	return (count);
}

int	ft_uxxprintf(va_list args, const char *format, int len)
{
	unsigned int	ui;
	int				count;

	ui = ft_format_uxx(args);
	if (ui == 0)
	{
		ft_putchar('0');
		count = 1;
	}
	else
	{
		count = 0;
		if (format[len] == 'x')
			count = ft_hex_conv(ui, 1);
		else if (format[len] == 'X')
			count = ft_hex_conv(ui, 2);
		else if (format[len] == 'u')
			count = ft_uprintf(ui);
	}
	return (count);
}
