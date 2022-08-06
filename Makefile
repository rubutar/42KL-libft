# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: rbutarbu <rbutarbu@student.42kl.edu.my>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/07/02 21:32:49 by rubutar           #+#    #+#              #
#    Updated: 2022/08/06 14:07:12 by rbutarbu         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


SRCS			= 	ft_isalpha.c ft_isascii.c ft_isalnum.c ft_isdigit.c ft_isprint.c \
					ft_strlen.c ft_memset.c ft_bzero.c \
					ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c\
					ft_toupper.c ft_tolower.c\
					ft_strchr.c ft_strrchr.c ft_strncmp.c\
					ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c \
					ft_calloc.c ft_strdup.c\
					\
					ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c\
					ft_itoa.c ft_strmapi.c\
					ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

SRCSB			=	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
					ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c\
					ft_lstclear.c ft_lstiter.c ft_lstmap.c
					
NAME				= libft.a
CC					= gcc
CC_FLAGS			= -Wall -Wextra -Werror
RM					= rm -f

OBJS_DIR = objs/
OBJS = $(SRCS:.c=.o)
OBJECTS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJS))

OBJSB = $(SRCSB:.c=.o)
OBJECTS_BONUS_PREFIXED = $(addprefix $(OBJS_DIR), $(OBJSB))

$(OBJS_DIR)%.o : %.c libft.h
	@mkdir -p $(OBJS_DIR)
	@echo "Compiling: $<"
	@clang $(CC_FLAGS) -c $< -o $@

$(NAME): $(OBJECTS_PREFIXED)
	@ar rcs $(NAME) $(OBJECTS_PREFIXED)
	@echo "Libft Done !"

all: $(NAME)

clean:
	rm -rf $(OBJS_DIR)

fclean: clean
	rm -f $(NAME)

re: fclean all

bonus: $(OBJECTS_BONUS_PREFIXED)
	@ar rcs $(NAME) $(OBJECTS_BONUS_PREFIXED)
	@echo "Libft Bonus Done !"

.PHONY: bonus all clean fclean re