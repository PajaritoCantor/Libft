# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jurodrig <jurodrig@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/01/20 17:11:23 by jurodrig          #+#    #+#              #
#    Updated: 2024/02/04 04:11:28 by jurodrig         ###   ########.fr        #
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

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c \
		ft_lstdelone.c ft_lstclear.c ft_lstiter.c  ft_lstmap.c

INCLUDE = libft.h

all: $(NAME) bonus

OBJ =	$(SRC:.c=.o)

$(NAME): $(OBJ) $(INCLUDE) 
	$(LIB) $(NAME) $(OBJ) 

BONUS_OBJS = $(BONUS:.c=.o)

$(BONUS_OBJS): %.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

bonus: $(OBJ) $(BONUS_OBJS)
		$(LIB) $(NAME) $(OBJ) $(BONUS_OBJS)

.PHONY:	all	clean	fclean	re bonus

clean:
	$(RM)	$(OBJ) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

re:	fclean all

