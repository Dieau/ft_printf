/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_utoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:58 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/26 13:25:15 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

static size_t	ft_uintlen(unsigned int ui)
{
	size_t			len;
	unsigned int	num;

	len = 0;
	num = ui;
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_utoa(unsigned int ui)
{
	char			*ptr;
	size_t			len;
	unsigned int	num;

	len = ft_uintlen(ui);
	ptr = (char *)malloc((len + 1) * sizeof(char));
	if (!ptr)
		return (NULL);
	ptr[len] = '\0';
	num = ui;
	if (ui == 0)
		ptr[0] = '0';
	while (num > 0)
	{
		len--;
		ptr[len] = num % 10 + '0';
		num /= 10;
	}
	return (ptr);
}
