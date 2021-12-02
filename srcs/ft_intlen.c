/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:21:14 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/25 11:37:03 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/utils.h"

size_t	ft_intlen(long n)
{
	size_t			len;
	unsigned int	num;

	len = 0;
	if (n <= 0)
	{
		num = n * -1;
		len++;
	}
	else
		num = n;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}
