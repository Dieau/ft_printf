# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alakhdar <<marvin@42.fr>>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/25 10:21:03 by alakhdar          #+#    #+#              #
#    Updated: 2021/11/29 14:09:22 by alakhdar         ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

SRCS = srcs/ft_printf.c	\
srcs/ft_intlen.c	\
srcs/ft_putchar.c	\
srcs/ft_putnbr.c	\
srcs/ft_putstr.c	\
srcs/ft_strlen.c	\
srcs/ft_tolower.c	\
srcs/pf_conversions.c	\
srcs/pf_format_print.c	\
srcs/pf_hex_conv.c	\
srcs/pf_hexlong_conv.c	\
srcs/pf_u_print.c	\
srcs/pf_utoa.c

OBJS = ${SRCS:.c=.o}

INCLUDES = includes/ft_printf.h \
		   includes/utils.h

CC = gcc
RM = rm -f

FLAGS = -Wall -Wextra -Werror

%.o : %.c ${INCLUDES}
	${CC} ${FLAGS} -I includes -c $< -o ${<:.c=.o}

$(NAME): ${OBJS} 
	ar rcs ${NAME} ${OBJS} 

all: ${NAME}	

clean:
	${RM} ${OBJS}

fclean:	clean
	${RM} ${NAME}

re:	fclean all
         
.PHONY: all clean fclean re
