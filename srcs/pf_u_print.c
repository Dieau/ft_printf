/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pf_u_print.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:54 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/26 13:25:10 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/ft_printf.h"

int	ft_uprintf(unsigned int ui)
{
	int		count;
	char	*ret;

	ret = ft_utoa(ui);
	ft_putstr(ret);
	count = ft_strlen(ret);
	free(ret);
	return (count);
}
