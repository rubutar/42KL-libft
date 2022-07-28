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


SRCS			= ft_atoi.c
OBJS			= $(SRCS:.c=.o)

# BONUS	= 
# BONUS_OBJS	=

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libft.a

all:			$(NAME)

$(NAME):		$(OBJS)
					ar rcs $(NAME) $(OBJS)


clean:
					$(RM) $(OBJS)

fclean:			clean
					$(RM) $(NAME)

re:				fclean $(NAME)

# bonus:			$(OBJS) $(BONUS_OBJS)
# 					ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:		all clean fclean re