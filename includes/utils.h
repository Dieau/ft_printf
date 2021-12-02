/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:23:02 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/26 15:38:03 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef UTILS_H
# define UTILS_H

# include "ft_printf.h"

# include <stdlib.h> // size_t

size_t	ft_intlen(long n);
void	ft_putchar(char c);
void	ft_putnbr(int nb);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);

#endif
