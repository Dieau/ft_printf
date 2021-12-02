/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:21:37 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/25 11:37:14 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

void	recursive(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		recursive(nb * -1);
	}
	else if (nb < 10)
	{
		nb += '0';
		ft_putchar(nb);
	}
	else
	{
		recursive(nb / 10);
		nb = nb % 10 + '0';
		ft_putchar(nb);
	}
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		recursive(147483648);
	}
	else
	{
		recursive(nb);
	}
}
