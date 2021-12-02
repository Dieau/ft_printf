/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:21:22 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/29 10:21:40 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static int	parse_format(va_list args, const char *format, int len)
{
	int	count;

	count = 0;
	if (format[len] == 'c')
		count += ft_cprintf(args);
	else if (format[len] == 's')
		count += ft_sprintf(args);
	else if (format[len] == 'd' || format[len] == 'i')
		count += ft_dprintf(args);
	else if (format[len] == 'p')
		count += ft_pprintf(args);
	else if (format[len] == 'x' || format[len] == 'X'
		|| format[len] == 'u')
		count += ft_uxxprintf(args, format, len);
	else if (format[len] == '%')
	{
		ft_putchar('%');
		count += 1;
	}
	return (count);
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		len;
	int		count;			

	va_start(args, format);
	len = 0;
	count = 0;
	while (format[len])
	{
		if (format[len] == '%' && format[len + 1])
		{
			len++;
			count += parse_format(args, format, len);
		}
		else
		{
			ft_putchar(format[len]);
			count++;
		}
		len++;
	}
	va_end(args);
	return (count);
}
