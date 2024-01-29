# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 17:11:23 by jurodrig          #+#    #+#              #
#    Updated: 2024/01/29 11:27:59 by jurodrig         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

LIB = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror
NAME = libft.a 

SRC	=	ft_atoi.c ft_bzero.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isalpha.c ft_isascii.c \
		ft_isdigit.c ft_isprint.c ft_substr.c ft_strdup.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
BONUS =	

INCLUDE = libft.h

all: $(NAME)

OBJ =	$(SRC:.c=.o)

$(NAME): $(OBJ) $(INCLUDE) 
	$(LIB) $(NAME) $(OBJ) 

BONUS_OBJS	=	$(BONUS:.c=.o)

bonus:$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

.PHONY:	all	clean	fclean	re

clean:
	$(RM)	$(OBJ)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

