# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 21:32:49 by rubutar           #+#    #+#              #
#    Updated: 2022/07/03 14:15:31 by rbutarbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS	= ft_putchar.c ft_putstr.c ft_putnbr.c ft_putchar_fd.c ft_putstr_fd.c ft_putnbr_fd.c
			ft_strlen.c

OBJS	= $(SRCS:.c=.o)

CC		= gcc
rm		= rm -f
CFLAGS	= -Wall -Wextra -Werror -std=c99

NAME	= libft.a

all:		$(NAME)

$(NAME):	$(OBJS)
					ar rcs $(NAME) $(OBJS)


clean:
	$(RM) $(OBJS)

fclean:		clean
				$(RM) $(NAME)

re:				fclean $(NAME)

.PHONY:		all clean fclean re
