/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 10:22:05 by alakhdar          #+#    #+#             */
/*   Updated: 2021/11/26 15:37:53 by alakhdar         ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "utils.h"
# include <stdarg.h>

int					ft_printf(const char *str, ...);
char				ft_format_c(va_list args);
char				*ft_format_s(va_list args);
unsigned long long	ft_format_p(va_list args);
int					ft_format_d(va_list args);
unsigned int		ft_format_uxx(va_list args);
int					ft_cprintf(va_list args);
int					ft_sprintf(va_list args);
int					ft_dprintf(va_list args);
int					ft_pprintf(va_list args);
int					ft_uxxprintf(va_list args, const char *format, int len);
int					ft_uprintf(unsigned int ui);
int					ft_hex_conv(unsigned int decimal, int format);
int					ft_hexlong_conv(unsigned long long decimal);
char				*ft_utoa(unsigned int ui);

#endif
