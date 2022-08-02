# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 21:32:49 by rubutar           #+#    #+#              #
#    Updated: 2022/08/03 00:20:42 by rbutarbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= 	ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c\
					ft_toupper.c ft_tolower.c\
					ft_strchr.c ft_strrchr.c ft_strncmp.c\
					ft_memchr.c ft_atoi.c \
					\
					ft_substr.c ft_strjoin.c ft_strtrim.c\
					ft_putchar_fd.c ft_putstr_fd.c  ft_putnbr_fd.c \
					
					
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
