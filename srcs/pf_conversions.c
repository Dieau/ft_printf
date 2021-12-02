/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_conversions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:13 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/26 15:37:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

char	ft_format_c(va_list args)
{
	char	c;

	c = va_arg(args, int);
	return (c);
}

int	ft_format_d(va_list args)
{
	int	d;

	d = va_arg(args, int);
	return (d);
}

unsigned long long	ft_format_p(va_list args)
{
	unsigned long long	p;

	p = (unsigned long long) va_arg(args, void *);
	return (p);
}

char	*ft_format_s(va_list args)
{
	char	*s;

	s = va_arg(args, char *);
	return (s);
}

unsigned int	ft_format_uxx(va_list args)
{
	unsigned int	ui;

	ui = va_arg(args, unsigned int);
	return (ui);
}
