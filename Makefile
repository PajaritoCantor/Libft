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

LIB = ar -rcs
RM = rm -f
CC = gcc
CFLAGS = -Wall -Wextra -Werror	
NAME = libft.a 

SRC	=	ft_isdigit.c ft_bzero.c ft_memset.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c \
		ft_strchr.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strncmp.c \
		ft_strnstr.c ft_strrchr.c ft_tolower.c ft_toupper.c \
		ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isalpha.c ft_isascii.c \
		ft_atoi.c ft_isprint.c ft_substr.c ft_strdup.c ft_strjoin.c \
		ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
		ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

BONUS = ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c ft_lstadd_back_bonus.c \
		ft_lstdelone_bonus.c ft_lstclear_bonus.c ft_lstiter_bonus.c  ft_lstmap_bonus.c

OBJ =	$(SRC:.c=.o)

BONUS_OBJS = $(BONUS:.c=.o)

$(NAME): $(OBJ) 
	$(LIB) $(NAME) $(OBJ) 

$(BONUS_OBJS): %.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

bonus: $(BONUS_OBJS)
		$(LIB) $(NAME) $(BONUS_OBJS)

.PHONY:	all	clean	fclean	re bonus

clean:
	$(RM) $(OBJ) $(BONUS_OBJS)

fclean:	clean
	$(RM) $(NAME)

all: $(NAME)

re:	fclean all
